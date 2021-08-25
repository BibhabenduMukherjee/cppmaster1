#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
};
 
// utility function new Node of BST
struct Node *createNode(int data)
{
    Node * new_Node = new Node;
    new_Node->left = NULL;
    new_Node->right = NULL;
    new_Node->data = data;
    return new_Node;
}

struct Node * insert(Node *root, int key)
{
    // If the tree is empty, return a new Node
    if (root == NULL)
        return createNode(key);
 
    // Otherwise, recur down the tree
    if (root->data > key)
        root->left = insert(root->left, key);
 
    else if (root->data < key)
        root->right = insert(root->right, key);
 
    // return the (unchanged) Node pointer
    return root;
}

int ksmallestElementSum_utii(struct Node* root , int key
int count )
{
    
    

	if(root == NULL) return 0;

	if(count > k) return 0;

	int res = ksmallestElementSum_utii(root->left , k ,count);
    
    if(count >= k) return res;

    res+= root->data;

    count++;

    if(count>=k) return res;
   

  return res+ksmallestElementSum_utii(root->right , k ,count);
}


int ksmallestElementSum(struct Node* root , int k)
{

	int count = 0;
	return ksmallestElementSum_utii(root , k ,count);
}

int main()
{
 
    /*    20
        /    \
       8     22
     /   \
    4     12
         /   \
        10    14
          */
    Node *root = NULL;
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 4);
    root = insert(root, 12);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 22);
 
    int k = 3;
    cout <<  ksmallestElementSum(root, k) <<endl;
    return 0;
}