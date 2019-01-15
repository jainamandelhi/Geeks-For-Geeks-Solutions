bool solve(int i,vector<bool>&visited,int p,list<int> adj[])
{
    visited[i]=true;
    list<int>::iterator itr;
    for(itr=adj[i].begin();itr!=adj[i].end();itr++)
    {
        if(!visited[*itr]){
            if(solve(*itr,visited,i,adj))
                return true;
        }
        else if(*itr!=p)
            return true;
    }
    return false;

}
bool Graph :: isCyclic()
{
    vector<bool>visited(V,0);
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            if(solve(i,visited,-1,adj))
            {
                return true;
            }
        }
    }
    return false;
//Your code here
}
