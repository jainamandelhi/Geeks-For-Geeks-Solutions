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
bool check(ll a,ll b,ll n)
{
    return(a<=n && a>=1 && b<=n && b>=1);
}
ll dfs(ll a,ll b,ll c,ll d,ll n)
{
    queue<pair<pair<ll,ll>,ll> >q;
    q.push(mp(mp(a,b),0));
    ll arr1[8]={2,2,-2,-2,1,-1,1,-1};
    ll arr2[8]={1,-1,1,-1,2,2,-2,-2};
    vector<vector<ll> >vis(n+1,vector<ll>(n+1));
    while(!q.empty())
    {
        ll fi=q.front().first.first;
        ll se=q.front().first.second;
        ll temp=q.front().second;
        q.pop();
        if(fi==c && se==d)
            return temp;
        vis[fi][se]=1;
        for(ll i=0;i<8;i++)
        {
            ll a=arr1[i]+fi;
            ll b=arr2[i]+se;
            if(check(a,b,n) &&!vis[a][b])
            {
                q.push(mp(mp(a,b),temp+1));
                vis[a][b]=1;
            }
        }
    }
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<dfs(a,b,c,d,n)<<endl;
    }
}
