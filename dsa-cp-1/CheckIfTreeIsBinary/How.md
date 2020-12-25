# How to check if binary tree is binary?

## Program:
#include <stdio.h>   
#include <stdlib.h>   
#include <limits.h>   
struct node   
{   
    int data;   
    struct node* left;   
    struct node* right;   
};    
int isBSTUtil(struct node* node, int min, int max);   
int isBST(struct node* node)    
{    
  return(isBSTUtil(node, INT_MIN, INT_MAX));    
}    
int isBSTUtil(struct node* node, int min, int max)    
{    
  if (node==NULL)    
     return 1;   
  if (node->data < min || node->data > max)    
     return 0;    
  return   
    isBSTUtil(node->left, min, node->data-1) &&    
    isBSTUtil(node->right, node->data+1, max);    
}    
struct node* newNode(int data)   
{   
  struct node* node = (struct node*)malloc(sizeof(struct node));   
  node->data = data;   
  node->left = NULL;   
  node->right = NULL;   
  return(node);   
}   
int main()   
{   
  struct node \*root = newNode(4);   
  root->left        = newNode(2);   
  root->right       = newNode(5);   
  root->left->left  = newNode(1);   
  root->left->right = newNode(3);       
  if(isBST(root))   
    printf("Is BST");   
  else  
    printf("Not a BST");   
  getchar();   
  return 0;   
}     

**Time Complexity:** O(n)  
**Auxiliary Space:** O(1) if Function Call Stack size is not considered, otherwise O(n)  

#### Output:
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/CheckIfTreeIsBinary/output1.png" alternate="input">\

***Contributed by*** [NihalSuresh](https://github.com/NihalSuresh007) , If you find it helpful , don't forget to drop a like 💖	Contributed by [NihalSuresh](https://github.com/NihalSuresh007) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with NihalSuresh 😊	
[Linkedin](https://www.linkedin.com/in/nihal-s-b0535a191)
