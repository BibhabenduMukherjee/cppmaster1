#include <bits/stdc++.h>
using namespace std;

//// you neeed a acamera -1
// you have a camera 0
// if you are coverred 1

int slove1(Node* root, int**c)
{
	if(root == NULL)
	{
		return 1;
	}

	int lc = slove1(root->left);
	int rc = slove1(root->right);

	if(lc== -1 || rc == -1)
	{
		**c++;
		return 0 ;
	}

	if(lc== 0 || rc == 0) return 1
}

int slove(Node* root , int * c){
	if(slove1(root , &c) == -1)
	{
      *c++;
	}
}

int main()
{
   int c = 0 ;
   slove(root , &c);

	return 0;
}