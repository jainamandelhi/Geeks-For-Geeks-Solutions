void dfs(Node *root,int l,int h,int &ans)
{
    if(!root)
        return;
    if(root->data>=l && root->data<=h)
    {
        ans++;
        dfs(root->left,l,h,ans);
        dfs(root->right,l,h,ans);
    }
    if(root->data<l)
    {
        dfs(root->right,l,h,ans);
    }   
    if(root->data>h)
    {
        dfs(root->left,l,h,ans);
    }
}
int getCountOfNode(Node *root, int l, int h)
{
    int ans=0;
    dfs(root,l,h,ans);
    return ans;
  // your code goes here   
}