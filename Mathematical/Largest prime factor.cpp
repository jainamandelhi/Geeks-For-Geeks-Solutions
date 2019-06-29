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
        ll n;
        cin>>n;
        ll ans=-1;
      while (n % 2==0)
    {
        ans=2;
        n >>=1;
    }
    for (int i=3;i<=sqrt(n);i+=2)
    {
        while (n%i==0)
        {
            ans=i;
            n=n/i;
        }
    }
    if(n>2)
        ans=n;

    cout<<ans<<endl;
    }
}
