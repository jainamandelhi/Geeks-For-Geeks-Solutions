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
//ll arr[10000002];
int main()
{
    fast;
    ll t;
    cin>>t;
   while(t--)
    {
        ll n;
        cin>>n;
        arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll m;
        cin>>m;
        ll arr1[m];
        for(ll i=0;i<m;i++)
            cin>>arr1[i];
        ll dp[m];
        memset(dp,0,sizeof(dp));
        for(ll i=0;i<n;i++)
        {
            ll curr=0;
            for(ll j=0;j<m;j++)
            {
                if(arr[i]==arr1[j])
                {
                    if(dp[j]<curr+1)
                        dp[j]=curr+1;
                }
                if(arr[i]>arr1[j])
                    curr=max(curr,dp[j]);
            }
        }
        ll maxi=0;
        for(ll i=0;i<m;i++)
            maxi=max(maxi,dp[i]);
        cout<<maxi<<endl;
    }
}
