
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/
// Should reverse list and return new head.
Node* reverse(Node *head)
{
    Node*p=head;
    if(p->next==NULL)
    {
        head=p;
        return head;
    }
    else
    head= reverse(p->next);
    Node*q=p->next;
    q->next=p;
    p->next=NULL;
    return head;
  // Your code here
}
