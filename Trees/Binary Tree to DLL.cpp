void dfs(Node *root,queue<Node*>&q)
{
    if(!root)
        return;
    dfs(root->left,q);
    q.push(root);
    dfs(root->right,q);
}
void bToDLL(Node *root, Node **head)
{ 
    queue<Node*>q;
    dfs(root,q);
    Node *temp1;
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(*head==NULL)
        {
            *head=temp;
            temp1=*head;
            continue;
        }
        temp1->right=temp;
        temp->left=temp1;
        temp1=temp;
    }
    // your code here
}