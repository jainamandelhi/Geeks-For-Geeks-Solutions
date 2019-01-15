int check(int i,vector<int>v,list<int> *adj)
{
    if(v[i]==1)
        return 1;
    v[i]=1;
    list<int>::iterator itr;
    for(itr=adj[i].begin();itr!=adj[i].end();itr++)
    {
        if(check(*itr,v,adj))
            return 1;
    }
    v[i]=0;
    return 0;
}
/*You are required to complete this method*/
bool Graph :: isCyclic()
{
    list<int>::iterator itr;
    for(int i=0;i<V;i++)
    {
        vector<int>v(V);
            int ans=check(i,v,adj);
            if(ans==1)
                return true;
    }
    return false;
}
