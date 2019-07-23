int dfs(Node *node)
{
    if(!node)
        return 0;
    
    int t = node->data;
    node->data = dfs(node->left) + dfs(node->right);
    return node->data + t;
    // Your code here
}
void toSumTree(Node *node)
{
    dfs(node);
}
