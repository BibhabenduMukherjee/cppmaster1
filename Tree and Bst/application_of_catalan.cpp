#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left , right;


};

vector<Node*> f(int start  , int end){
    
    vector<Node*>v;
	if(start > end) {
    v.push_back(NULL);
    return v;
	}

for(int i = start ; i<=end i++){

	vector<Node*> l = f(start , i-1);
	vector<Node*> r = f(i+1 ,end);
	for (int j = 0; j <l.size(); ++j)
	{
		Node *left = l[j];
		for (int k = 0; k <r.size(); ++k)
		{
			Node *right = r[k];
			Node *node = new Node(i);
			node->left = left;
			node->right= right;
		}
	}

}
return v;

}  

int main(){

    vector<Node *> totalTreesFrom1toN = f(1, 3);
    cout << "Preorder traversals of all constructed BSTs are \n";
    for (int i = 0; i < totalTreesFrom1toN.size(); i++)
    {
        preorder(totalTreesFrom1toN[i]);
        cout << endl;
    }
	return 0;
}