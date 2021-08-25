#include <bits/stdc++.h>
using namespace std;




int slove(Node* root , int k)
{
	Node* curr = root;
	int ksmall = INT_MIN;
    int count = 0 ;

	while(curr!=NULL)
	{


     if(curr->left == NULL)
     {
      count++;
       
     
        if(count==k)
        {
          ksmall = curr->data;
        }
         curr = curr->right;
     }else{

      Node* pre = curr->left;

      while(pre->right!=NULL and pre->right!=curr)
      {
      	pre = pre->right;
      }
      
      if(pre->right==NULL)
      {
       pre->right = curr;
       curr = curr->left;
      }else{

       pre->right = NULL;
       count++;

       if(count==k)
       {
       	ksmall=curr-data;
       }

       curr= curr->right;

      }

     }
      




	}

	return ksmall;
}