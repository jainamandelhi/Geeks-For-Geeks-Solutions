void dfs(int i,vector<int>&vis,stack<int>&s,vector<int>adj[])
{
    vis[i]=1;
    for(int j=0;j<adj[i].size();j++)
    {
        if(!vis[adj[i][j]])
            dfs(adj[i][j],vis,s,adj);
    }
    s.push(i);
}
int* topoSort(int V, vector<int> adj[])
{
    stack<int>s;
    vector<int>vis(V);
    for(int i=0;i<V;i++)
    {
        if(vis[i])
            continue;
        dfs(i,vis,s,adj);
    }
    int *ans=new int[V],i=0;
    while(!s.empty())
    {
        ans[i++]=s.top();
        s.pop();
    }
    return ans;
    // Your code here
}
