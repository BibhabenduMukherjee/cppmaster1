#include <bits/stdc++.h>
using namespace std;


// Strategy
// 1. if both empty return ture
// 2  if both non-empty
  // a. check that the data at nodes is equal
  // b. check if left subtrees are same 
  // c. check if right subtrees are same
// if (a,b,c) are true , return true else , return false



struct Node{

	int data;
	Node *left , *right;
	Node(int val){
		data = val
		left = NULL;
		right =NULL;
	}
}


// isIdentical

bool isIdentical(Node* root1 , Node* root2){
	if(!root1 and !root2 ) return true;

	else if (!root1 or !root2 ) return false;     
	
    else{
    	bool cond1 = root1->data = root2->data;
    	bool cond2 = isIdentical(root1->left , root2->left);
    	bool cond3 = isIdentical(root1->right , root2->right);

    	if(cond1 and cond2 and cond3) return true;

    	return false;
    }

}

int main(){


	return 0;
}