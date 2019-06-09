#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
ll sea(ll x,ll in[],ll n)
{
    for(ll i=0;i<n;i++)
        if(in[i]==x)
            return i;
}
void dfs(ll pr[],ll in[], ll n)
{
    ll root=sea(pr[0],in,n);
    if(root!=0)
        dfs(pr+1,in,root);
    if(root!=n-1)
        dfs(pr+root+1,in+root+1,n-root-1);
    cout<<pr[0]<<" ";
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll> >v(n+1);
        vector<vector<ll> >v1(n+1);
        for(ll i=0;i<m;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[a].pb(b);
        }
        for(ll i=0;i<m;i++)
        {
            ll a,b;
            cin>>a>>b;
            v1[a].pb(b);
        }
        ll flag=1;
        for(ll i=1;i<n+1;i++)
        {
            ll j=v[i].size();
            ll k=j-1;
            for(ll s=0,t=k;s<j,t>=0;s++,t--)
            {
                if(v[i][s]!=v1[i][t])
                {
                    flag=0;
                    break;
                }
            }
        }
        cout<<flag<<endl;
    }
}
