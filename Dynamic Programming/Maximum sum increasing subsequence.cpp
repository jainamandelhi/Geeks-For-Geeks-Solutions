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
        vector<pair<int,int> >v;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.pb(mp(a,a));
        }
        int maxi=v[0].first;
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(v[i].first>v[j].first && v[j].second+v[i].first>v[i].second)
                {
                    v[i].second=v[j].second+v[i].first;
                    maxi=max(maxi,v[i].second);
                }
            }
        }
        cout<<maxi<<endl;
    }
}
