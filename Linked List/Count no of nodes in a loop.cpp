// C++ program to count number of nodes
// in loop in a linked list if loop is
// present
#include<bits/stdc++.h>
using namespace std;
/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node *newNode(int key)
{
    struct Node *temp = new(struct Node);
    temp->data = key;
    temp->next = NULL;
    return temp;
}
int noOfNodes(struct Node *temp2)
{
    struct Node* temp3=temp2;
    int res=1;
    while(temp3->next!=temp2)
    {
        temp3=temp3->next;
        res++;
    }
    return res;
}
int countNodesinLoop(struct Node *head)
{
    struct Node* temp=head, *temp1=head->next;
    while(temp!=temp1)
    {
        temp=temp->next;
        temp1=temp1->next->next;
    }
    int n=noOfNodes(temp1);
    return n;
}
/* Driver program to test above function*/
int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next;

    cout<<countNodesinLoop(head);

    return 0;
}
