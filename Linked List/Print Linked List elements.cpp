void display(struct Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
   //add code here
}