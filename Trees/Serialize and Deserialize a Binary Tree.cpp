void serialize(Node *root,vector<int> &A)
{
    if(!root)
        return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            A.push_back(-1);
            continue;
        }
        A.push_back(temp->data);
        if(temp->left)
            q.push(temp->left);
        else
            q.push(NULL);
        if(temp->right)
            q.push(temp->right);
        else
            q.push(NULL);
    }
    //Your code here
}
/*this function deserializes
 the serialized vector A*/
Node * deSerialize(vector<int> &A)
{
    if(A.size()==0)
        return NULL;
    Node *head;
    head->data=A[0];
    head->left=NULL;
    head->right=NULL;
    //Node *temp=head;
    queue<Node*>q;
    q.push(head);
    int i=1;
    while(!q.empty() && i<A.size())
    {
        Node *temp=q.front();
        q.pop();
        Node *temp1=new Node;
        if(A[i]!=-1){
            temp1->data=A[i];
            temp1->left=NULL;
            temp1->right=NULL;
            q.push(temp1);
        }
        else
        {
            temp1=NULL;
        }
        temp->left=temp1;
        i++;
        if(i<A.size())
        {
            Node *temp2=new Node;
            if(A[i]!=-1){
                temp2->data=A[i];
                temp2->left=NULL;
                temp2->right=NULL;
                q.push(temp2);
            }
            else
            {
                temp2=NULL;
            }
            temp->right=temp2;
        }
        i++;
    }
    return head;
   //Your code here
}