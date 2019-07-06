void dfs(Node *root,int l,int h,vector<int>&arr)
{
    if(!root)
        return;
    dfs(root->left,l,h,arr);
    arr.push_back(root->data);
    dfs(root->right,l,h,arr);
}
void printNearNodes(Node *root, int l, int h)
{
    vector<int>arr;
    dfs(root,l,h,arr);
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=l && arr[i]<=h)
            cout<<arr[i]<<" ";
    }
  // your code goes here   
}