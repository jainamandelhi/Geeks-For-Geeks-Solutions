#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll index,total=0,temp=0;
vector<ll>ans;
void dfs(ll f,vector<vector<ll> >v,vector<ll>&vis,ll arr[])
{
    vis[f]=1;
    total+=arr[f-1];
    if(arr[f-1]>temp){
        temp=arr[f-1];
        index=f;
    }
    else if(arr[f-1]==temp)
        index=min(index,f);
    for(ll i=0;i<v[f].size();i++)
    {
        if(vis[v[f][i]]==0)
        {
            dfs(v[f][i],v,vis,arr);
        }
    }
}
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>vis(n+1);
    ll arr[n],tot=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];
    }
    vector<vector<ll> >v(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0){
            dfs(i,v,vis,arr);
        total=total-temp;
        temp=0;
        ans.pb(index);
        }
    }
    cout<<tot-total<<" "<<total<<endl;
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}
