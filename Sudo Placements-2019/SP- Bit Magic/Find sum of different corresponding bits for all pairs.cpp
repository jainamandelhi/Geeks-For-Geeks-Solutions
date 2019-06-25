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
        ll ans=0;
        for(ll i=31;i>=0;i--)
        {
            ll cnt=0;
            for(ll j=0;j<n;j++)
            {
                if(((arr[j]>>i) & 1)==1)
                    cnt++;
            }
            ans+=((cnt)%mod*(n-cnt)%mod)*2;
            ans%=mod;
        }
        cout<<ans%mod<<endl;
    }
}
