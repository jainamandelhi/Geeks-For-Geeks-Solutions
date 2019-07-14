{
/* Program to split a circular linked list into two halves */
#include<stdio.h>
#include<stdlib.h>

/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
};
void splitList(struct Node *head, struct Node **head1_ref,   struct Node **head2_ref);
 struct Node* newNode(int key)
{
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;

    return temp;
}
/* Function to split a list (starting with head) into two lists.
   head1_ref and head2_ref are references to head Nodes of
    the two resultant linked lists */
 void printList(struct Node *head)
{
  struct Node *temp = head;
  if(head != NULL)
  {
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != head);
    printf("
");
  }
}

/* Driver program to test above functions */
int main()
{

   int t,n,i,x;
    scanf("%d",&t);
   while(t--)
   {
	   struct Node *temp,*head = NULL;
  struct Node *head1 = NULL;
  struct Node *head2 = NULL;
	   scanf("%d",&n);
	    scanf("%d",&x);
	   head=newNode(x);
	   temp=head;
	   for(i=0;i<n-1;i++){
	   scanf("%d",&x);

	   temp->next=newNode(x);

	   temp=temp->next;}
 temp->next=head;

  splitList(head, &head1, &head2);

 // printf("
First Circular Linked List");
  printList(head1);

 // printf("
Second Circular Linked List");
  printList(head2);

   }
  return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of linked list is the following
struct Node
{
   int data;
   Node* next;
};   */
//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *temp=head, *temp1;
    *head1_ref=head;
    int ct=1;
    while(temp->next!=head)
    {
        ct++;
        temp=temp->next;
    }
    temp1=temp;
    temp=head;
    if(ct%2==0)
    {
        ct/=2;
        ct--;
        while(ct--)
        {
            temp=temp->next;
        }
        *head2_ref=temp->next;
        temp->next=*head1_ref;
        temp1->next=*head2_ref;
    }
    else
    {
        ct/=2;
        while(ct--)
        {
            temp=temp->next;
        }
        *head2_ref=temp->next;
        temp->next=*head1_ref;
        temp1->next=*head2_ref;
    }
    // your code goes here
}
