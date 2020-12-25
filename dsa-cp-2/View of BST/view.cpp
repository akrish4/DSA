#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insert(struct node *node, int data)
{
    if (!node)
        return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

void leftView(struct node *root)
{
    if (!root)
        return;

    queue<struct node *> nodes;
    nodes.push(root);

    while (nodes.size())
    {
        int len = nodes.size();
        for (int i = 0; i < len; i++)
        {
            struct node *temp = nodes.front();
            nodes.pop();

            if (!i)
                cout << temp->data << " ";

            if (temp->left)
                nodes.push(temp->left);
            if (temp->right)
                nodes.push(temp->right);
        }
    }
}

void rightView(struct node *root)
{
    if (!root)
        return;

    queue<struct node *> nodes;
    nodes.push(root);

    while (nodes.size())
    {
        int len = nodes.size();
        for (int i = len - 1; i >= 0; i--)
        {
            struct node *temp = nodes.front();
            nodes.pop();

            if (i == len - 1)
                cout << temp->data << " ";

            if (temp->right)
                nodes.push(temp->right);
            if (temp->left)
                nodes.push(temp->left);
        }
    }
}

void Inorder(struct node *root, int level)
{
    if (!root)
        return;
    Inorder(root->left, level + 1);
    cout << root->data << "\tLevel:\t" << level << "\n";
    Inorder(root->right, level + 1);
}

int main()
{
    struct node *root = NULL;

    root = insert(root, 1);
    insert(root, 5);
    insert(root, 4);
    insert(root, 6);
    insert(root, 2);
    insert(root, 8);
    insert(root, 3);

    Inorder(root, 1);

    cout << "\nLEFT:\n";
    leftView(root);
    cout << "\n";

    cout << "\nRIGHT:\n";
    rightView(root);
    cout << "\n";
    return 0;
}
