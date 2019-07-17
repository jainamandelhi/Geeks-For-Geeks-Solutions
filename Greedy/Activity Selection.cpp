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
        vector<pair<ll,ll> >v(n);
        for(ll i=0;i<n;i++)
            cin>>v[i].second;
        for(ll i=0;i<n;i++)
            cin>>v[i].first;
        sort(v.begin(),v.end());
        ll ans=0;
        ll beg=v[0].first;
        for(ll i=0;i<n;i++)
        {
            if(v[i].second>=beg)
            {
                beg=v[i].first;
                ans++;
            }
        }
        cout<<ans+1<<endl;
    }
}
