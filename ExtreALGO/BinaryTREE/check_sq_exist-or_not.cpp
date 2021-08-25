#include<bits/stdc++.h>
using namespace std;


// given  two root node for checking a sq in exist 
//  or not



void checkSq_utill(Node* root  , vector<int> &v)
{
      if(!root) return;


      checkSq_utill(root->left  , v);

      v.push_back(root->data);

      checkSq_utill(root->right , v);
}


bool checkSq(Node* root1 , Node* root2)
{
	vector<int> v1 , v2 ;


	checkSq_utill(root1 , v1);
}

