void dfs(struct Node *root,vector<int>&arr)
{
    if(!root)
        return;
    dfs(root->left,arr);
    arr.push_back(root->data);
    dfs(root->right,arr);
}
void dfs1(struct Node *root,int a,int b,int &flag)
{
    if(!root)
        return;
    dfs1(root->left,a,b,flag);
    if(root->data==a)
        root->data=b;
    else if(root->data==b)
        root->data=a;
    dfs1(root->right,a,b,flag);
}
struct Node *correctBST( struct Node* root )
{
    vector<int>arr;
    dfs(root,arr);
    int a=-1,b=-1;
    vector<int>arr1=arr;
    sort(arr1.begin(),arr1.end());
    int temp=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=arr1[i] && a==-1)
            a=arr[i];
        else if(arr[i]!=arr1[i] && a!=-1)
            b=arr[i];
    }
    dfs1(root,a,b,flag);
    return root;
    // add code here.
}