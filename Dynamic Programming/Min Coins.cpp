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
ll ans;
ll dfs(vector<ll>arr,ll m,ll n,ll i,vector<vector<ll> >dp,ll cnt)
{
    if(m==0){
            ans=min(cnt,ans);
        return 1;
    }
    if(m<0 || i>=n)
        return 0;
    if(dp[m][i]!=-1)
        return dp[m][i];
    dp[m][i]=dfs(arr,m-arr[i],n,i,dp,cnt+1)+dfs(arr,m,n,i+1,dp,cnt);
    //cout<<m<<" "<<i<<" "<<dp[m][i]<<endl;
    return dp[m][i];
}
ll dp[101][100001];
int main()
{
    ll t,flag;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ans=INT_MAX;
        cin>>n>>m;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
       //ll dp[n+1][m+1];
       sort(arr,arr+n,greater<ll>());
       for(ll i=0;i<=n;i++)
       {
           for(ll j=0;j<=m;j++)
                dp[i][j]=INT_MAX;
       }
       for(ll i=0;i<=n;i++)
       {
           for(ll j=0;j<=m;j++)
           {
               if(j==0)
               {
                   dp[i][j]=0;
                   continue;
               }
               if(i>0 && ( j<arr[i-1] || dp[i][j-arr[i-1]]==INT_MAX))
               {
                   dp[i][j]=dp[i-1][j];
               }
               else if(i>0)
               {
                   dp[i][j]=min(dp[i][j-arr[i-1]]+1,dp[i-1][j]);
               }
           }
       }
       if(dp[n][m]==INT_MAX)
            dp[n][m]=-1;
        cout<<dp[n][m]<<endl;
    }
}
