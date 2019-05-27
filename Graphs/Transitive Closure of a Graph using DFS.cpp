#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
vector<vector<ll> >v;
vector<ll>vis;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
void dfs(ll st)
{
    vis[st]=1;
    for(ll i=0;i<v[st].size();i++)
    {
        if(v[st][i]==1 && vis[i]==0)
        {
            vis[i]=1;
            dfs(i);
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        v=vector<vector<ll> >(n,vector<ll>(n));
        vector<vector<ll> >ans(n,vector<ll>(n));
        for(ll i=0;i<n;i++)
            for(ll j=0;j<n;j++)
                cin>>v[i][j];
        for(ll i=0;i<n;i++)
        {
            vis=vector<ll>(n);
            dfs(i);
            ans[i][i]=1;
            for(ll j=0;j<v[i].size();j++)
            {
                if(vis[j]==1)
                    ans[i][j]=1;
            }
        }
        for(ll i=0;i<n;i++)
            for(ll j=0;j<n;j++)
                cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
