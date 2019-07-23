struct node* makeUnion(struct node* head1, struct node* head2)
{
    vector<int>v;
    while(head1)
    {
        v.push_back(head1->data);
        head1=head1->next;
    }
    while(head2)
    {
        v.push_back(head2->data);
        head2=head2->next;
    }
    sort(v.begin(),v.end());
    map<int,int>m;
    node *root=NULL, *temp;
    for(int i=0;i<v.size();i++)
    {
        if(m[v[i]])
            continue;
        m[v[i]]++;
        node *temp3=new node;
        temp3->data=v[i];
        temp3->next=NULL;
        if(root==NULL)
        {
            root=temp3;
            temp=root;
        }
        else
        {
            temp->next=temp3;
            temp=temp3;
        }
    }
    return root;
    // code here
}
