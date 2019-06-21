#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dfs(ll arr[],ll i,ll n,ll v[][200],ll sum)
{
    if(i+1==n)
        return max(arr[i],arr[n]);
    if(v[i][n]!=-1)
        return v[i][n];
    v[i][n] = max(sum-dfs(arr,i+1,n,v,sum-arr[i]),sum-dfs(arr,i,n-1,v,sum-arr[n]));
    return v[i][n];
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       ll arr[n],sum=0;
       for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
       }
       ll v[200][200];
       memset(v,-1,sizeof(v));
       cout<<dfs(arr,0,n-1,v,sum)<<endl;
   }
}
