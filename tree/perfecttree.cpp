#include <bits/stdc++.h>
using namespace std;

int slove(Node* node)
{
	int d =0;
	while(node!=NULL)
	{
		d++;
	}

	return d;
}


bool isPerfect_Utill(Node* root , int d , int label = 0)
{
  // root is null
  
  if(!root) return true;

  // reach last

  if(root->left == NULL and root->right == NULL)
  {
  	return (d== label +1);

  }

  if(root->left == NULL || root->right ==NULL)
  {
       return false;
  }


return (isPerfect_Utill(root->left , d , label+1)  and 
	isPerfect_Utill(root->right , d , label+1));
}

bool isPerfect(Node* root)
{
	int d = slove(Node* root);

	return isPerfect_Utill(root , d);
}