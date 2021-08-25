// given two balanced BST
// root1 and root2 
// store ones inorder traversal in one array 
// and another also in arr2 array
#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return(Node);
}
 

void stInorder(node* node , int inorder[] , int *arr_idx)
{
	// calling stInorder() for left subtree 

   if(node==NULL) return;
      

	stInorder(node->left , inorder , arr_idx);

	inorder[*arr_idx] = node->data;

	(*arr_idx)++;

	stInorder(node->right, inorder , arr_idx);
}

node* sortedArrayToBST(int arr[], int start, int end)
{
    /* Base Case */
    if (start > end)
    return NULL;
 
    /* Get the middle element and make it root */
    int mid = (start + end)/2;
    node *root = newNode(arr[mid]);
 
    /* Recursively construct the left subtree and make it
    left child of root */
    root->left = sortedArrayToBST(arr, start, mid-1);
 
    /* Recursively construct the right subtree and make it
    right child of root */
    root->right = sortedArrayToBST(arr, mid+1, end);
 
    return root;
}
int *merge(int arr1[], int arr2[], int m, int n)
{
    // mergedArr[] is going to contain result
    int *mergedArr = new int[m + n];
    int i = 0, j = 0, k = 0;
 
    // Traverse through both arrays
    while (i < m && j < n)
    {
        // Pick the smaller element and put it in mergedArr
        if (arr1[i] < arr2[j])
        {
            mergedArr[k] = arr1[i];
            i++;
        }
        else
        {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
 
    // If there are more elements in first array
    while (i < m)
    {
        mergedArr[k] = arr1[i];
        i++; k++;
    }
 
    // If there are more elements in second array
    while (j < n)
    {
        mergedArr[k] = arr2[j];
        j++; k++;
    }
 
    return mergedArr;
}

node*  mergeTrees(node* root1 , node* root2 , int m , int n ){
	int i = 0;
	int* arr1 = new int[m];

	// store inorder of one tree

	stInorder(root1 , arr1,&i);
    int j =0;
	int* arr2 = new int[n];

	stInorder(root2 , arr2,&j);

	int *mergedArr = merge(arr1, arr2, m, n);

       // Construct a tree from the merged
    // array and return root of the tree
    
	return sortedArrayToBST (mergedArr, 0, m + n - 1);

}




void printInorder(node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    cout << node->data << " ";
 
    /* now recur on right child */
    printInorder(node->right);
}

int main()
{
    /* Create following tree as first balanced BST
        100
        / \
        50 300
    / \
    20 70
    */
    node *root1 = newNode(100);
    root1->left     = newNode(50);
    root1->right = newNode(300);
    root1->left->left = newNode(20);
    root1->left->right = newNode(70);
 
    /* Create following tree as second balanced BST
            80
        / \
        40 120
    */
    node *root2 = newNode(80);
    root2->left     = newNode(40);
    root2->right = newNode(120);
 
    node *mergedTree = mergeTrees(root1, root2, 5, 3);
 
    cout << "Following is Inorder traversal of the merged tree \n";
    printInorder(mergedTree);
 
    return 0;
}