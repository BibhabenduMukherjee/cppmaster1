#include <bits/stdc++.h>
using namespace std;


void slove(Node* root , int key ,  Node* succ , Node* pre)
{
 

	if(!root)
	{
		return ;
	}

	if(root->data == key)
	{
		if(root->left!=NULL)
		{
			Node* temp = root->left;
			while(temp->right!=NULL)                                    
			{
				temp= temp->right;
				
			}
			pre = temp;
		}


		if(root->right!=NULL)
		{
          Node* temp = root->right;
          while(temp->left!=NULL)
          {
            temp = temp->left;
          
          }
          temp = succ;
		}
		return;
	}

	else if(root->data > key)
	{
		succ = root;
     slove(root->left , key , succ , pre);
	}else{
		pre= root;
		slove(root->right , key ,succ ,pre);
	}




}




