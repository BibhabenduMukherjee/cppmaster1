// Input:  Linked List 1->2->3
// Output: A Balanced BST 
//      2   
//    /  \  
//   1    3 


// Input: Linked List 1->2->3->4->5->6->7
// Output: A Balanced BST
//         4
//       /   \
//      2     6
//    /  \   / \
//   1   3  5   7  

// We first count the number of nodes in the given Linked List. Let the count be n. 
// After counting nodes, we take left n/2 nodes and recursively construct the left subtree.
// After left subtree is constructed, 
// we allocate memory for root and link the left subtree with root. Finally, we recursively
// construct the right subtree and link it with root.

TNode* sortedListToBST(LNode *head) 
{ 
    /*Count the number of nodes in Linked List */
    int n = countLNodes(head); 
  
    /* Construct BST */
    return sortedListToBSTRecur(&head, n); 
} 

TNode* sortedListToBSTRecur(LNode **head_ref, int n) 
{ 
    /* Base Case */
    if (n <= 0) 
        return NULL; 
  
    /* Recursively construct the left subtree */
    TNode *left = sortedListToBSTRecur(head_ref, n/2); 
  
    /* Allocate memory for root, and 
    link the above constructed left 
    subtree with root */
    TNode *root = newNode((*head_ref)->data); 
    root->left = left; 
  
    /* Change head pointer of Linked List
    for parent recursive calls */
    *head_ref = (*head_ref)->next; 
  
    /* Recursively construct the right 
        subtree and link it with root 
        The number of nodes in right subtree
        is total nodes - nodes in 
        left subtree - 1 (for root) which is n-n/2-1*/
    root->right = sortedListToBSTRecur(head_ref, n - n / 2 - 1); 
  
    return root; 
} 
