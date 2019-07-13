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
ll arr[10000002];
int main()
{
    fast;
    ll t;
    cin>>t;
   while(t--)
    {
        ll n,m;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll mini=INT_MAX;
        cin>>m;
        m--;
        ll i=0;
        while(i+m<n)
            mini=min(arr[i+m]-arr[i++],mini);
        cout<<mini<<endl;
    }
}
