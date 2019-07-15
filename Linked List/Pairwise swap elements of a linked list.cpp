void pairWiseSwap(struct node *head)
{
    if(!head)
        return;
    node *temp=head->next;
    while(head && temp)
    {
        swap(temp->data,head->data);
        head=temp->next;
        if(head)
        temp=head->next;
    }
   // The task is to complete this method
}