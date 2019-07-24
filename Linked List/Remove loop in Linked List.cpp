void removeTheLoop(Node *head)
{
    set<Node *>s;
    Node *temp=NULL;
    while(head)
    {
        if(s.find(head)!=s.end())
        {
            break;
        }
        s.insert(head);
        head=head->next;
    }
    if(head==NULL)
        return;
    temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=NULL;
        
     //Your code here
}
