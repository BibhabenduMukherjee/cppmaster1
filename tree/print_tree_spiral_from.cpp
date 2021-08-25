#include <bits/stdc++.h>
using namespace std;

// for spiral traversal we first need height
// of the tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
  

void printSpiral_utii(struct Node* root , int lebel , int f)
{
	if(!root) return;

	if(lebel == 1)
	{
		cout << root->data <<" ";
	}

	if(lebel > 1)
	{
		if(f)
		{
			printSpiral_utii(root->left , lebel-1 , f);
			printSpiral_utii(root->right , lebel -1 , f);
		}else
		{
			printSpiral_utii(root->right , lebel-1 , f);
			printSpiral_utii(root->left , lebel -1 , f);
		}
	}
}

int height(struct Node* root)
{
	if(!root) return 0;


	int l = height(root->left);
	int r = height(root->right);

	if(l>r) {
		return l+1;
	}else
	{
		return r+1;
	}
}


void printSpiral(struct Node* root)
{
	int h = height(root);
	bool f = false;
     int i;
     for( i = 1 ; i<=h ;  i++)
     {
       printSpiral_utii(root , i , f);
       f = !f;
     }

}




struct Node* newNode(int data)
{
    Node* newnode = new Node();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
  
    return (newnode);
}


int main()
{

struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    printf("Spiral Order traversal of " 
           "binary tree is \n");
             
    printSpiral(root);
  
    return 0;
}