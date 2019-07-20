void dfs(Node *root,int level,int &maxi)
{
    if(!root)
        return;
    if(level>maxi)
    {
        cout<<root->data<<" ";
        maxi=level;
    }
    dfs(root->left,level+1,maxi);
    dfs(root->right,level+1,maxi);
}
void leftView(Node *root)
{
    int level=1,maxi=0;
    dfs(root,level,maxi);
   // Your code here
}
