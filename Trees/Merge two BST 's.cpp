void fun(Node *temp,vector<int>&v)
{
    if(!temp)
        return;
    fun(temp->left,v);
    v.push_back(temp->data);
    fun(temp->right,v);
}
void merge(Node *root1, Node *root2)
{
    vector<int>v;
    fun(root1,v);
    fun(root2,v);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
   //Your code here
}