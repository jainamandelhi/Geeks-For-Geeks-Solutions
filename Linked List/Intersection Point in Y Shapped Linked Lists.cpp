{
#include<iostream>
#include<stdio.h>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
int intersectPoint(struct Node* head1, struct Node* head2);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;
    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }
        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
   int getcount(Node *head)
   {
       int cp=1;
       while(head->next!=NULL)
       {
           head=head->next;
           cp++;
       }
       return cp;
   }
int intersectPoint(Node* head1, Node* head2)
{
    Node *temp,*temp1=head1,*temp2=head2;
    int a= getcount(head1);
    int b=getcount(head2);
    int c;
    int d=abs(a-b);
    d--;
    if(a>=b)
    {
        temp=head1;
        while(d>0)
        {
            temp=temp->next;
            d--;
        }

        temp1=temp->next;
    }
    else
    {
        temp=head2;
        while(d>0)
        {
            temp=temp->next;
            d--;
        }
        temp2=temp->next;
    }
    while(temp1 && temp2)
    {
        if(temp1==temp2)
            break;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1->data;
    return -1;
    // Your Code Here
}
