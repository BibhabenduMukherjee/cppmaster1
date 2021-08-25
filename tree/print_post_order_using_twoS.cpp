#include <bits/stdc++.h>
using namespace std;




void slove(Node* root)
{
   stack<Node* , Node*> s1 , s2;


   s1.push(root);

   while(!s1.empty())
   {
   	Node* node = s1.top();
   	s1.pop();

   	s2.push(node);

   	if(node->left!=NULL)
   	{
   		s1.push(node->left);

   	}

   	if(node->right!=NULL)
   	{
   		s1.push(node->right);
   	}
   }


   while(!s2.empty())
   {
   	Node* node = s2.top();

   	s2.pop();

   	cout << node->data <<" ";
   }

}