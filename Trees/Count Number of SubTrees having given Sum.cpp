int cnt;
int dfs1(Node *root)
{
    if(!root)
        return 0;
    int sum=root->data;
    if(!root->left && !root->right)
        return root->data;
    if(root->left)
        sum+=dfs1(root->left);
    if(root->right)
        sum+=dfs1(root->right);
    return sum;
}
void dfs(Node *root,int x)
{
    if(!root)
        return ;
    int l=dfs1(root);
    if(l==x)
        cnt++;
    dfs(root->left,x);
    dfs(root->right,x);
}
int countSubtreesWithSumX(Node* root, int x)
{
    cnt=0;
	if (!root)return 0;
	dfs(root,x);
	//dfs(root->right,x);
	return cnt;
	// Code here
}