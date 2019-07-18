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
        ll n,amt;
        cin>>n>>amt;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll ans=0;
        ll i=0;
        while(amt>0)
        {
            amt-=arr[i++];
            if(amt>=0)
                ans++;
        }
        cout<<ans<<endl;
    }
}
