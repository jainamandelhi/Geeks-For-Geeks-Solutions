void dfs(Node *root,int &ans)
{
    if(!root)
        return;
    if(!root->left && !root->right)
        ans+=root->data;
    dfs(root->left,ans);
    dfs(root->right,ans);
}
int sumOfLeafNodes(Node *r ){
    int ans=0;
    dfs(r,ans);
    return ans;
     /*Your code here */
}