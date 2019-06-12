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
        vector<ll>v(2*n+1,INT_MAX);
        v[0]=0;
        for(ll i=0;i<=n;i++)
        {
            v[2*i]=min(v[i]+1,v[2*i]);
            v[i+1]=min(v[i]+1,v[i+1]);
        }
        cout<<v[n]<<endl;
    }
}
