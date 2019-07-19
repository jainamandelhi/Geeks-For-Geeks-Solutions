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
    fast;
    cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll> >v(2*n);
        for(ll i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=0;
        }
        for(ll i=n;i<2*n;i++){
            cin>>v[i].first;
            v[i].second=1;
        }
        sort(v.begin(),v.end());
        ll maxi=0,curr=0;
        for(ll i=0;i<2*n;i++)
        {
            if(v[i].second==0)
                curr++;
            else
                curr--;
           // cout<<curr<<endl;
            maxi=max(maxi,curr);
        }
        cout<<maxi<<endl;
    }
}
