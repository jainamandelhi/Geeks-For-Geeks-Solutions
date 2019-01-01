#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
void dfs(ll i, vector<ll>&visited,vector<vector< ll> >v)
{
    visited[i]=1;
    for(ll j=0;j<v[i].size();j++)
        if(visited[v[i][j]]==0)
            dfs(v[i][j],visited,v);
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<vector< ll> >v(n);
    while(1)
    {
        ll a,b;
        cin>>a>>b;
        if(a==-1)
            break;
        v[a].pb(b);
    }
    vector<ll>visited(n);
    vector<ll>visitor(n);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i,visited,v);
            ans=i;
        }
    }
    dfs(ans,visitor,v);
    for(ll i=0;i<n;i++)
    {
        if(visitor[i]==0)
        {
            cout<<"No Mother";
            return 0;
        }
    }
    cout<<ans;
    return 0;
}
