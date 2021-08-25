#include <bits/stdc++.h>
using namespace std;


class DNode{

public:
	int data;
	DNode* next;
	DNode* prev;

	DNode(int val){
		data = val;
		next = prev = NULL;
	}
};


void insertAttail(DNode** head , int data){
	if(*head==NULL)
	{
		*head = new DNode(data);
		return;
	}
    DNode* n = new DNode(data);

    DNode* temp = *head;

    while(temp->next!=NULL){
    	temp= temp->next;
    }
   
   temp->next = n;
   n->prev = temp;
	
}
void display(DNode** head){
	DNode* temp = *head;

	while(temp!=NULL){
		cout << temp->data <<" ";
		temp=temp->next;
	}
}
int32_t main(){
    
    DNode* head = NULL;
    insertAttail(&head , 5);
    insertAttail(&head , 6);
    insertAttail(&head , 7);
    insertAttail(&head , 9);
    display(&head);
	return 0; 
}