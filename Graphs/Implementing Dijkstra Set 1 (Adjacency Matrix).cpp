
void dijkstra(vector<vector<int>> graph, int src, int V)
{
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
    vector<int>vis(V);
    q.push(make_pair(0,src));
    vector<int>ans(V,INT_MAX);
    ans[src]=0;
    while(!q.empty())
    {
        int fi=q.top().first;
        int se=q.top().second;
        q.pop();
        if(vis[se]==1)
            continue;
        ans[se]=fi;
        vis[se]=1;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
                q.push(make_pair(fi+graph[se][i],i));
        }
        //ans[q.top().second]=fi+graph[se][q.top().second];
    }
    for(int i=0;i<V;i++)
        cout<<ans[i]<<" ";
    // Your code here
}