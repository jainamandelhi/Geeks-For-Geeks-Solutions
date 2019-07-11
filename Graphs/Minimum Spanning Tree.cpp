int spanningTree(int V,int E,vector<vector<int> > graph)
{
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;
    vector<int>visited(V+1);
    vector<int>ans(V+1,INT_MAX);
    ans[1]=1;
    q.push(make_pair(0,1));
    while(!q.empty())
    {
        int fi=q.top().first;
        int se=q.top().second;
        q.pop();
        //cout<<fi<<" "<<se<<endl;
        if(visited[se])
            continue;
        visited[se]=1;
        ans[se]=fi;
        for(int i=1;i<=V;i++)
        {
            if(visited[i]==0 && graph[se-1][i-1]!=INT_MAX)
            {
                //int temp=min(ans[i],fi+graph[se-1][i-1]);
                //cout<<se<<" "<<temp<<" "<<i<<endl;
                q.push(make_pair(graph[se-1][i-1],i));
            }
        }
    }
   // for(int i=1;i<=V;i++)
    //    cout<<ans[i]<<" ";
    //cout<<endl;
    int ans1=0;
    for(int i=1;i<=V;i++)
        ans1+=ans[i];
    return ans1;
    // code here
}