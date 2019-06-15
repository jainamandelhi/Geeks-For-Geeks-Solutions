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
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n=3;
       ll arr[n],w;
       cin>>w;
       for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
       vector<vector<ll> >v(n+1,vector<ll>(w+1));
       for(ll i=1;i<=n;i++)
       {
           for(ll j=0;j<=w;j++)
           {
               if(arr[i-1]>j)
                    v[i][j]=v[i-1][j];
               else if(arr[i-1]==j){
                    ll a=1;
                    v[i][j]=max(a,v[i-1][j]);
               }
               else
                if(v[i][j-arr[i-1]]!=0)
                    v[i][j]=max(v[i][j-arr[i-1]]+1,v[i-1][j]);
                else
                    v[i][j]=v[i-1][j];
           }
       }
      /* for(ll i=0;i<=n;i++)
       {
            for(ll j=0;j<=w;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
       }*/
       cout<<v[n][w]<<endl;
   }
    return 0;
}
