//  given a node that is need to be deleted 
// search that node in BST (Locate)   if (key > root) call delete fucntion in root->right  else if call root->right
// if root== key (3 case possible)
// 1. root -> left = NULL;
// 2. root->right = NULL;
// 3. root need to be deleted ( find inorder successor[temp->data]) replace it with root->data call delete func 
//    in root->right for temp->data
// GOOD TO GO 
#include <bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node* left , *right;

	Node(int val){
		data = val;
		right= NULL;
		left= NULL;
	}
};


// find inorder successor

Node* inorder_successor(Node* root){
	Node* curr = root;
	while(curr && curr->left!= NULL){
		curr = curr->left;
	}
	return curr;
}


// implementing delete_NODE function

Node* delete_NODE_BST(Node* root , int key){

	if (root->data > key)
	{
	   root->left = delete_NODE_BST(root->left , key);	
	}


	else if (root->data < key)
	{
		root->right = delete_NODE_BST(root->right , key);
	}

	else{
		if(root->left == NULL){
			Node* temp =  root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
			Node* temp = root->left;
			free(root);
			return temp;
		}
		
			Node* temp = inorder_successor(root->right);
			root->data = temp->data;
			root->right = delete_NODE_BST(root->right , temp->data);
		
	}
	return root;
}
void inorder(Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
int main(int argc, char const *argv[])
{   

	Node* root = new Node(4);
	root->left = new Node(2);
    root->right = new Node(5);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right->right = new Node(6);

    inorder(root);
    cout << "\n"<<"------------------------------------" <<endl;


	Node*new_root = delete_NODE_BST(root ,5);  // pass BST root and node to be deleted

	inorder(new_root);
	return 0;
}