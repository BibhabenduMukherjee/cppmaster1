#include<bits/stdc++.h>
using namespace std;



class Node{

public:
	int data;
	Node* left;
	Node* right;
	Node* parent;

	Node(int val)
	{
    data = val;
    left = right = parent =NULL;
	}

};


Node* insertNode(Node* root , int data){
	if(root == NULL)
	{
		return (new Node(data));
	}else{

	if(data <= root->data)
	{
	  Node* temp = insertNode(root->left , data);
	  root->left = temp;
	  temp->parent = root;
	  	
	}else{
		Node* temp = insertNode(root->right,data);
		root->right = temp;
		temp->parent  =  root;
	}
}
 return root;

}



Node* inorder_succ(Node* root , Node* temp)
{

   if(temp->right!=NULL)
   {
 
      return minValue(temp->right);
   }

   Node*p = n->parent;

   while(p!=NULL and temp==p->right)
   {
    p = n;
    p = p->parent;
   }
return p;
}


void inorder(Node* node){
	if(node==NULL){
		return;
	}
	inorder(node->left);
	cout << node->data<<" ";
	inorder(node->right);
}

int main()
{


Node* root = NULL;

root = insertNode(root , 100);
root = insertNode(root , 50);

root = insertNode(root , 30);

root= insertNode(root, 300);

root = insertNode(root, 150);
root= insertNode(root , 400);

inorder(root);

     
	return 0;
}