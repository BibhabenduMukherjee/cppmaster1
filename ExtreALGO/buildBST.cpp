#include <bits/stdc++.h>
using namespace std;

class Node {

public:
	int data
	Node* left;
	Node* right;


};

Node* sortedArrayToBST(int arr[]   ,  int start , int end){

if(start>end) return NULL;

   int mid = (start+end)/2;

   Node* root = newNode(arr[mid]);

   root->left  = sortedArrayToBST(arr , start , mid-1);
   root->right = sortedArrayToBST(arr, mid+1 , end);



return root;
}


Node* newNode(int data){
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}
int main(){

	// if array is sorted 

    int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
        int n = sizeof(arr) / sizeof(arr[0]); 

       Node *root = sortedArrayToBST(arr, 0, n-1); 
           cout << "PreOrder Traversal of constructed BST \n"; 
    preOrder(root); 


	return 0;
}







struct Node
{
	int data;
	Node *left, *right;
	Node(int val){
		data = val;
		left = NULL;
		right  =NULL;
	}
};

Node *f(Node *root , int val){
    if(root==NULL) return new Node(val);
	if(val<root->data) root->left = f(root->left , val);
	else  root->right = f(root->right , val);

	return root;
}


int main()
{

Node *root = NULL;
root = f(root , 5);

}