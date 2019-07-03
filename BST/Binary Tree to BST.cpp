void inorder(Node *root,vector<int>&v)
{
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
void dfs(Node *root,vector<int>&v,int &i)
{
    if(root==NULL)
        return;
    dfs(root->left,v,i);
    root->data=v[i];
    (i)++;
    dfs(root->right,v,i);
}
Node *binaryTreeToBST (Node *root)
{
    vector<int>v;
    inorder(root,v);
    sort(v.begin(),v.end());
    //cout<<v.size()<<endl;
    int i=0;
    dfs(root,v,i);
    //v.clear();
    return root;
//Your code here
}
 