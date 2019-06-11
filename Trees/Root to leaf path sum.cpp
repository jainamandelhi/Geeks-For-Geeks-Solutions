bool dfs(Node *node,int ans,int sum)
{
    if(!node)
        return 0;
    if(!node->left && !node->right)
    {
        if(ans+node->data==sum)
            return 1;
        else
            return 0;
    }
    return dfs(node->left,ans+node->data,sum) || dfs(node->right,ans+node->data,sum);
    
}
bool hasPathSum(Node *node, int sum)
{
    return dfs(node,0,sum);
   //Your code here
}