int findMax(struct node* root)
{
    int left=0,right=0,maxi;
    if(root->left)
        left=findMax(root->left);
    if(root->right)
        right=findMax(root->right);
        maxi=max(left,right);
        maxi=max(maxi,root->data);
        return maxi;
}
// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
    int left=100001,right=100001,mini;
    if(root->left)
        left=findMin(root->left);
    if(root->right)
        right=findMin(root->right);
    mini=min(left,right);
    mini=min(mini,root->data);
    return mini;
}
