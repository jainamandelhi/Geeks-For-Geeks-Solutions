#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
vector<vector<ll> >v;
vector<vector<ll> >vis;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
ll temp;
void dfs(ll x,ll y, ll z)
{
    ll n=v.size();
    ll m=v[0].size();
    vis[x][y]=1;
    if(x+1<n && vis[x+1][y]==0 && v[x+1][y]==temp)
    {
        v[x+1][y]=z;
        dfs(x+1,y,z);
    }
    if(y+1<m && vis[x][y+1]==0 && v[x][y+1]==temp)
    {
        v[x][y+1]=z;
        dfs(x,y+1,z);
    }
    if(x-1>=0 && vis[x-1][y]==0 && v[x-1][y]==temp)
    {
        v[x-1][y]=z;
        dfs(x-1,y,z);
    }
    if(y-1>=0 && vis[x][y-1]==0 && v[x][y-1]==temp)
    {
        v[x][y-1]=z;
        dfs(x,y-1,z);
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        v=vector<vector<ll> >(n,vector<ll>(m));
        vis=vector<vector<ll> >(n,vector<ll>(m));
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
                cin>>v[i][j];
        ll x,y,z;
        cin>>x>>y>>z;
        temp=v[x][y];
        v[x][y]=z;
        dfs(x,y,z);
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
                cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
