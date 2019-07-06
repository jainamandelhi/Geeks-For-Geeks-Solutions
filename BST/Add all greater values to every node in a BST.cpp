void dfs(Node *root,vector<int>&arr)
{
    if(!root)
        return;
    dfs(root -> left,arr);
    arr.push_back(root->data);
    dfs(root->right,arr);
}
void dfs1(Node *root,vector<int>&arr,int &i)
{
    if(!root)
        return;
    dfs1(root->left,arr,i);
    root->data=arr[i++];
    dfs1(root->right,arr,i);
}
void modify(Node **root)
{
    vector<int>arr;
    dfs(*root,arr);
    int n=arr.size();
    for(int i=n-2;i>=0;i--)
        arr[i]+=arr[i+1];
    int i=0;
    dfs1(*root,arr,i);
// Your code here
}