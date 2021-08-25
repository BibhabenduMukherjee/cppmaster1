#include <bits/stdc++.h>
using  namespace std;


void ConstartBTree(int preOrder[] , int *preIdx , int key, int min, int max, int n){
	if(*preIdx>=n) return ;

	if(key > min && key < max){
		Node *root = NULL;

		root = newNode(key);

		*preIdx = *preIdx +1;

		if(*preIdx < n) {
			root -> left = ConstartBTree(preOrder , &preIdx , preOrder[*preIdx], min , key , n)
		}

		if(*preIdx < n) {
			root -> right = ConstartBTree(preOrder , &preIdx , preOrder[*preIdx], key , max , n)
		}
	}
}


void   ConstartTree( int preOrder[] ,int  n){
	int preIdx = 0;
	ConstartBTree(preOrder , &preIdx , preOrder[0], INT_MIN , INT_MAX , n);
}


 int main(){


   int preOrder[] ={5,3,1,7,8};


   int n = sizeof(arr)/ sizeof(arr[0]);
 ConstartTree(preOrder , n)

 	return 0;
 }





