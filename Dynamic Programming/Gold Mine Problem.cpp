#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dfs(ll i,ll j,ll arr[][23],ll dp[][23],ll n,ll m)
{
    if(i==n || j==m || i==-1 || j==-1)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    ll ans=arr[i][j];
    ll ans1=ans,ans2=ans;
    ans+=dfs(i-1,j+1,arr,dp,n,m);
    ans1+=dfs(i,j+1,arr,dp,n,m);
    ans2+=dfs(i+1,j+1,arr,dp,n,m);
    dp[i][j]=max(ans,max(ans1,ans2));
    return dp[i][j];
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll n,m;
       cin>>n>>m;
       ll v[23][23];
       ll dp[23][23];
       for(ll i=0;i<n;i++)
           for(ll j=0;j<m;j++)
                cin>>v[i][j];
        memset(dp,-1,sizeof(dp));
        ll ans=-1;
        for(ll i=0;i<n;i++)
            ans=max(ans,dfs(i,0,v,dp,n,m));
        cout<<ans<<endl;
   }
}
