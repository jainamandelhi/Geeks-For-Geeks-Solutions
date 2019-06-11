void dfs(Node *root,int &even, int &odd,int level)
{
    if(!root)
      return;
        if(level%2==0){
            even+=root->data;
        }
        else{
            odd+=root->data;
        }
        dfs(root->left,even,odd,level+1);
        dfs(root->right,even,odd,level+1);
}
int getLevelDiff(Node *root)
{
    int even=0,odd=0;
    dfs(root,even,odd,0);
    return even-odd;
   //Your code here
}