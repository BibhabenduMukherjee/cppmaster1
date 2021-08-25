// your task to convert a BST to doubly linked list
// 

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node*left;
	Node* right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};





void prifpre(Node* root){

	if(!root) return;

	prifpre(root->left);
	cout << root->data;
	prifpre(root->right);

}


int main()
{  

	Node* root = new Node(50);

	root->left = new Node(30);  

	root->left->left = new Node(20);

	root->left->right  = new Node(40);

    prifpre(root);

	return 0;
}