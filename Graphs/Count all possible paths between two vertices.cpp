#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
vector<bool>visited(5);
void fun(vector<vector<int> >adj,int a,int b,int &total)
{
    visited[a]=true;
    if(a==b)
        total++;
    else
    {
        for(int i=0;i<adj[a].size();i++)
            if(visited[adj[a][i]]==false)
                fun(adj,adj[a][i],b,total);
    }
    visited[a]=false;
}
int main()
{
    int n,m,o;
    cin>>n>>m>>o;
    vector<vector<int> >adj(n);
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1)
            break;
            a--;
            b--;
        adj[a].pb(b);
    }
    int total=0;
    m--,o--;
    fun(adj,m,o,total);
    cout<<total;
}
