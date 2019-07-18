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
    ll t,flag;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll ans=INT_MAX;
        sort(arr,arr+n);
        ll temp=0;
        for(ll i=-1;i<n;i++)
        {
            if(i>=0)
                temp+=arr[i];
            ll t1=temp;
            for(ll j=n-1;j>i;j--)
            {
                ll a=0;
                t1+=max(a,arr[j]-arr[i+1]-k);
            }
            ans=min(ans,t1);
        }
        cout<<ans<<endl;
    }
}
