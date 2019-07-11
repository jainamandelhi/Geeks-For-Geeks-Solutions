bool isBipartite(int G[][MAX],int V)
{
    map<int,int>m1,m2;
    for(int i=0;i<V;i++)
    {
        if(m1[i] || m2[i])
            continue;
        queue<int>q;
        m1[i]++;
        map<int,int>::iterator itr;
        for(itr=m1.begin();itr!=m1.end();itr++)
        {
            if(G[i][itr->first] || G[itr->first][i])
            {
                m1[i]=0;
                m2[i]++;
                break;
            }
        }
        q.push(i);
        while(!q.empty())
        {
            int fi=q.front();
            q.pop();
            for(int j=0;j<V;j++)
            {
                if(!G[fi][j])
                    continue;
                if(m1[fi] && m1[j] && G[fi][j])
                    return 0;
                if(m2[fi] && m2[j] && G[fi][j])
                    return 0;
                if(m1[j] || m2[j])
                    continue;
                if(m1[fi] && G[fi][j])
                {
                    m2[j]++;
                    q.push(j);
                }
                if(m2[fi] && G[fi][j])
                {
                    m1[j]++;
                    q.push(j);
                }
            }
        }
    }
    return 1;
     //Your code here
}