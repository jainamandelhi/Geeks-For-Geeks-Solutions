void dfs(Node * head, Node *head1)
{
    if(!head1)
        return;
    dfs(head->next,head1->next);
    head1->next=head;
}
void reorderList(Node* head) 
{
    if(!head)
        return;
    Node * head1=head,*head2=head;
    head1=head->next;
    while(head1 && head1->next)
    {
        head1=head1->next->next;
        head2=head2->next;
    }
    head1=head2->next;
    head2->next=NULL;
   
    
   Node *temp=head1;
    while(temp && temp->next)
        temp=temp->next;
    if(head1)
    {
        dfs(head1,head1->next);
        head1->next=NULL;
    }
    head2=head;
    while(head2 && temp)
    {
        Node *temp3=head2->next, *temp4=temp->next;
        head2->next=temp;
        temp->next=temp3;
        head2=temp3;
        temp=temp4;
    }
    
    // Your code here
}