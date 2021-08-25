

#include <bits/stdc++.h>
using namespace std;


morrisTraversal(node* root)
{
node* curr = root;
while(curr!=NULL){
   if(curr->left == NULL)
   {
   	cout << root->data <<" ";
   	curr = curr->right;
   }else
   {

   	node *righmost = curr->left;

   	while(rigthmost->right!=NULL and rigthmost!= curr){
   		rigthmost = rigthmost->right;
   	} 

   	if(rigthmost->right == NULL ) // thread not created yet 
   	{
       // connect the rightmost node of left subtree
   		// with curr

   		rigthmost->right = curr;
   		curr = curr->left;
   	}else{
       rigthmost->right = NULL;
       cout << curr->data;
       curr = curr->right;
   	}

   }

}

}






////////// Given a worng BST // ==> two nodes might be swapped in the original tree



// your task is to repalce those nodes and correct the tree


void slove(node* root)
{
    node* curr= root, * a =NULL, *b = NULL , *prev = NULL;
   while(curr!=NULL){

      node* leftChild = curr->left;
    if(leftchild==NULL)
    {
      if(prev!=NULL and prev->data > curr->data)
      {

         if(a==NULL)a = prev;
         
         b = curr;
      }

      prev = curr;
      curr = curr->right;
    }else
    {
      node* rightmost = getRightMost(leftchild , curr);

      if(rigthmost->right == NULL)
      {
         rigthmost->rihgt = curr;
         curr = curr->left;
      }else
      {
            rigthmost->rihgt = NULL;
            if( prev->data > curr->data)
            {
              if(a==NULL) a = prev;
               b = curr;
            }
            prev = curr;
            curr = curr->right;

      }
    }

}

if(!a)
{
   int temp = a->data;
   a->data = b->data;
   b->data = temp;
}

}




















