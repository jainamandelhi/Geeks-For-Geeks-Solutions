int dfs(Node *root)
{
    if(!root)
        return 0;
    int hl=1+dfs(root->left);
    //cout<<"hl "<<hl<<endl;
    int hr=1+dfs(root->right);
    //cout<<"hr "<<hr<<endl;
    if(hl>hr)
        return hl;
    else
        return hr;
}
bool isBalanced(Node *root)
{
    if(!root)
        return 1;
    int hl=dfs(root->left);
    int hr=dfs(root->right);
    return (abs(hl-hr)<=1 && isBalanced(root->left) && isBalanced(root->right));
    //  Your Code here
}
