#include <iostream> 
using namespace std; 

/* A binary tree node has data, pointer to left child 
and a pointer to right child */
struct Node { 
	int data; 
	struct Node *left, *right; 
	Node(int data) 
	{ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
/*The printing could be done after visiting the left and right child both or even before visiting any of them. Changing the print doesn't affect traversal*/
	/* first recur on left child */
	printInorder(node->left); 

	/* then print the data of node */
	cout << node->data << " "; 

	/* now recur on right child */
	printInorder(node->right); 
} 

/* Driver program to test above functions*/
int main() 
{ 
	struct Node* root = new Node(10); 
	root->left = new Node(25); 
	root->right = new Node(43); 
	root->left->left = new Node(74); 
	root->left->right = new Node(50); 

	cout << "\nInorder traversal of binary tree is \n"; 
	printInorder(root); 

	return 0; 
} 
