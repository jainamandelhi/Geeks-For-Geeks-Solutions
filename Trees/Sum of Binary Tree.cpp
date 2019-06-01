long int sumBT(Node* root)
{
    if(!root)
        return 0;
    int ans=root->key;
    ans+=sumBT(root->left);
    ans+=sumBT(root->right);
    return ans;
    // Code here
}
