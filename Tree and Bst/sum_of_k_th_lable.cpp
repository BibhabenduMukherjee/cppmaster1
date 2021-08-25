// Online C++ compiler to run C++ program online


// lable order traversal first push root in the queue
// and then push NULL (NULL indicats lavel of current node)
// now queue become root->NULL (0th lavel)
// 1. store root in Node type variable then pop root
       // NULL
// 2. check temp variable NULL or Not if Not 
      // performe operation if(curr_L == given_L) print data
      // else push temp->left then temp->right if exist

// 3. if temp NULL (one lavel finished) push NULL again 
#include <bits/stdc++.h>
using namespace std;


class Node{

public:
    int data;
	Node* left , *right;
	Node(int val){
      data = val;
      left = right = NULL;
	}
};


int printKth_sum_Lable_Order(Node* root , int k){
if (!root)
{
	return -1;
}

  queue<Node*> q;

  q.push(root);
  q.push(NULL);
    int lable =0;
  int sum =0;

  while(!q.empty()){
  	Node* x = q.front();
  	q.pop();
  	if(x!=NULL){
       if(lable == k)  sum += (x->data);

       if(x->left) q.push(x->left);
       if(x->right) q.push(x->right);

  	}

  	else if(!q.empty()){
  		q.push(NULL);
  		lable++;
  	}
  }



return sum;


}



int main()
{
	Node* root ;

	root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
    int k =2;
	cout << printKth_sum_Lable_Order(root,k);
	return 0;
}