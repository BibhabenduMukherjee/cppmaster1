// 1->2->3->4->5->6

// ratote by k = 2;

// 5->6->1->2->3->4->NULL

Node* slove(Node*head , int k)
{
  Node* head = curr;
  int n = 0;

  while(curr!= NULL)
  {
    n++;
    curr= curr->next;
  }

  k = k%n;

  int c = n-k;

  curr->next = head;

  while(c--)
  {
  	curr = curr->next;
  }

  head = curr->next;
  curr->next = NULL;

  return head;
}