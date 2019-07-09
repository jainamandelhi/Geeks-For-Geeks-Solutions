int ans;
void dfs(bool v[][SIZE],int arr[][SIZE],int i,int j,int n,int m)
{
    int maxi=0;
    queue<pair<int ,int > >q;
    q.push(make_pair(i,j));
    while(!q.empty())
    {
        int fi=q.front().first;
        int se=q.front().second;
        q.pop();
        v[fi][se]=1;
        maxi++;
        if(fi-1>=0 && arr[fi-1][se]==1 && !v[fi-1][se])
        {
            v[fi-1][se]=1;
            q.push(make_pair(fi-1,se));
        }
        if(se-1>=0 && arr[fi][se-1]==1 && !v[fi][se-1])
        {
            v[fi][se-1]=1;
            q.push(make_pair(fi,se-1));
        }
        if(fi+1<n && arr[fi+1][se]==1 && !v[fi+1][se])
        {
            v[fi+1][se]=1;
            q.push(make_pair(fi+1,se));
        }
        if(se+1<m && arr[fi][se+1]==1 && !v[fi][se+1])
        {
            v[fi][se+1]=1;
            q.push(make_pair(fi,se+1));
        }
        if(fi-1>=0 && se-1>=0 && arr[fi-1][se-1]==1 && !v[fi-1][se-1])
        {
            v[fi-1][se-1]=1;
            q.push(make_pair(fi-1,se-1));
        }
        if(fi-1>=0 && se+1<m && arr[fi-1][se+1]==1 && !v[fi-1][se+1])
        {
            v[fi-1][se+1]=1;
            q.push(make_pair(fi-1,se+1));
        }
        if(fi+1<n && se-1>=0 && arr[fi+1][se-1]==1 && !v[fi+1][se-1])
        {
            v[fi+1][se-1]=1;
            q.push(make_pair(fi+1,se-1));
        }
        if(fi+1<n && se+1<m && arr[fi+1][se+1]==1 && !v[fi+1][se+1])
        {
            v[fi+1][se+1]=1;
            q.push(make_pair(fi+1,se+1));
        }
    }
    ans=max(ans,maxi);
}
int findAreaUtil(int n, int m, int arr[SIZE][SIZE], bool v[SIZE][SIZE]){
    ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1 && v[i][j]==0)
                dfs(v,arr,i,j,n,m);
        }
    }
    return ans;
    // Your code here
}