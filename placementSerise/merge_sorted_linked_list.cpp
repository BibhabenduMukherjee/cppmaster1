#include <bits/stdc++.h>
using namespace std;


class Node{

public:

	int data;
	Node* next;

	Node(int val )
	{
		data = val;
		next = NULL;
	}
};



void push_front(Node**a  , int data)
{
	Node* new_node = new Node(data);

	new_node->next  = (*a);

	(*a) = new_node;
}


void print_list_data(Node*a)
{
	Node* temp = a;
	while(temp!=NULL)
	{
		cout << temp->data <<"---->" ;
		temp = temp->next;
	}cout <<"NULL";
}

Node* SortedMerge(Node* a , Node* b)
{
    
    Node* result = NULL;

	if(a == NULL)return (b);
	else if(b==NULL) return (a);


    if (a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = SortedMerge(a, b->next);
}
	return (result);
}

int main(){

   Node*a = NULL;

   push_front(&a , 7);
   push_front(&a , 6);
   push_front(&a , 5);

   Node*b = NULL;

   push_front(&b , 4);
   push_front(&b , 3);
   push_front(&b , 2);
   
   Node*newH = NULL;

   newH = SortedMerge(a,b);

   print_list_data(newH);
	return 0 ; 
}