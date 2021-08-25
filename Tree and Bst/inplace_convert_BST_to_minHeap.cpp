 /* Constructing below tree
                8
              /   \
             4     12
           /  \   /  \
          2    6 10   14
     */


/* Output - Min Heap
                2
              /   \
             4     6
           /  \   /  \
          8   10 12   14
     */

#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *left, *right;
};

// convert minHeap

void SortedLLToMinHeap(Node* &root, Node* head)

{

    // Base Case

    if (head == NULL)

        return;

 

    // queue to store the parent nodes

    queue<Node *> q;

 

    // The first node is always the root node

    root = head;

 

    // advance the pointer to the next node

    head = head->right;

 

    // set right child to NULL

    root->right = NULL;

 

    // add first node to the queue

    q.push(root);

 

    // run until the end of linked list is reached

    while (head)

    {

        // Take the parent node from the q and remove it from q

        Node* parent = q.front();

        q.pop();

 
        // Take next two nodes from the linked list and

        // Add them as children of the current parent node

        // Also in push them into the queue so that

        // they will be parents to the future nodes

        Node *leftChild = head;

        head = head->right;        // advance linked list to next node

        leftChild->right = NULL; // set its right child to NULL

        q.push(leftChild);


        // Assign the left child of parent

        parent->left = leftChild;

 
        if (head)

        {
            Node *rightChild = head;

            head = head->right; // advance linked list to next node

            rightChild->right = NULL; // set its right child to NULL

            q.push(rightChild);

 
            // Assign the right child of parent

            parent->right = rightChild;
        }

    }

}


// convert a BST to linked list

// make a function call first right of tree






void BSTToSortedLL(Node* root , Node** head_ref){
    
    if(!root) return;

     BSTToSortedLL(root->right , head_ref) // right most node

     root->right = *head_ref;

     if(*head_ref !=NULL) 
        (*head_ref)->left = NULL;
    

     root = *head_ref;
     BSTToSortedLL(root->left , head_ref);
     
}




Node* BSTToMinHeap(Node* &root)
{
    // head of Linked List
    Node *head = NULL;
 
    // Convert a given BST to Sorted Linked List
    BSTToSortedLL(root, &head);
 
    // set root as NULL
    root = NULL;
 
    // Convert Sorted Linked List to Min-Heap
    SortedLLToMinHeap(root, head);
}