#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left , *right;

};

Node *newNode(int val){
	Node *node = new Node();
	node->data = val;
	node->left = NULL;
	node->right =NULL;

	return node;
}


// checking for BST without no stack space 
// using morris traversal
node* getRightMost(node* curr , node* leftchild)
{


return res;

}

void checkBST_using_morris(node* root)
{
    node* curr = root;
    node* leftchild = curr->left;

    while(curr!=NULL)
    {
    	  if(leftchild == NULL)
    	  {
    	  	if(prev!=NULL  && prev->data > curr->data) return false; 


    	  	prev = curr;
    	  	curr= currr->right;
    	  }else{

    	  	node* rightmost = getRightMost(curr , leftchild);

    	  	if(rightmost->right == NULL)
    	  	{
    	  		rightmost->right = curr;
    	  		curr = curr->left;
    	  	}else{
    	  		if(prev->data > vurr->data) return false;

    	  		rightmost->right = NULL;
    	  		prev = curr;
    	  		curr = curr->right;
    	  	}
    	  }
    }
}



bool isBST(Node *root , Node *min , Node *max){
if(!root) return true;

   if(min!=NULL and min->data > root->data) return false; 
   if(max!=NULL and max->data < root->data) return false; 

   bool Lv = isBST(root->left , min , root);
   bool Rv  = isBST(root->right , root, max);

   return Lv and Rv;


}
int main()
{
	Node *root = newNode(3);
	root->left = newNode(2);
	root->left->left = newNode(1);
	root->right = newNode(8);
	root->right->left = newNode(4);
	root->right->right = newNode(9);

	if(isBST(root , NULL , NULL)) cout << "YES";
	else{cout << "NO";}
	return 0;
}