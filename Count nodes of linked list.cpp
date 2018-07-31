{
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */
void push(struct node** head_ref, int new_data)
{

    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));


    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
int getCount(struct node* head);
/* Drier program to test count function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--){
    struct node *head = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            push(&head,l);
        }

    /* Check the count function */
    printf("%d
",getCount(head));
    }
    return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Count the number of nodes
in the linked list
Node is defined as
struct node
{
    int data;
    struct node* next;
};

*/
//Code here
int getCount(struct node* head){
    int count =1;
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    free(temp);
    return count;
//Code here
}

