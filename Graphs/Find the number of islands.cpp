void dfs(bool v[][51],vector<int> arr[],int i,int j,int n,int m)
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
}
int findIslands(vector<int> arr[], int n, int m)
{
    int ans=0;
    bool v[51][51];
    for(int i=0;i<51;i++)
        for(int j=0;j<51;j++)
            v[i][j]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1 && v[i][j]==0)
            {
            	ans++;
                dfs(v,arr,i,j,n,m);
            }
        }
    }
    return ans;
    // Your code here
}