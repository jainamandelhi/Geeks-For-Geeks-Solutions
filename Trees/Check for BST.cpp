
bool dfs(Node *root,int maxi,int mini)
{
    if(!root)
        return 1;
    if(root->data<mini || root->data>maxi)
        return 0;
    return dfs(root->left,root->data-1,mini) && dfs(root->right,maxi,root->data-1);
}
bool isBST(Node* root) {
    if(!root)
        return 1;
    return dfs(root,INT_MAX,INT_MIN);
    // Your code here
}
