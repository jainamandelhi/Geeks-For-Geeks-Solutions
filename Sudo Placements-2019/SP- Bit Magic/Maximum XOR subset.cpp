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
//ll n;
ll dfs(ll arr[],ll dp[][5000],ll i,ll val,ll n)
{
    if(i==n)
        return val;
    if(dp[i][val]!=-1)
        return dp[i][val];
    dp[i][val]=max(dfs(arr,dp,i+1,val,n),dfs(arr,dp,i+1,val^arr[i],n));
    return dp[i][val];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll dp[n+2][5000];
        memset(dp,-1,sizeof(dp));
        cout<<dfs(arr,dp,0,0,n)<<endl;
    }
}
