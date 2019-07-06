void dfs(Node *root,int arr[],int &i)
{
    if(!root)
        return;
    dfs(root->left,arr,i);
    arr[i++]=(root->data);
    dfs(root->right,arr,i);
}
int KthSmallestElement(Node *root, int k)
{
    int arr[101];
    int i=0;
    dfs(root,arr,i);
    return arr[k-1];
    //add code here.
}