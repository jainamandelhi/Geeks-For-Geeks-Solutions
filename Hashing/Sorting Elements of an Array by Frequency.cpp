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
bool p(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first>b.first;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll> >v(62);
        for(ll i=0;i<62;i++)
        {
            //cout<<v[i].first<<" ";
            v[i].second=i;
        }
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v[a].first++;
        }
        sort(v.begin(),v.end(),p);
        ll i=0;
        for(ll j=0;j<n;){
            while(v[i].first>0 && j<n)
            {
            cout<<v[i].second<<" ";
            v[i].first--;
            j++;
            }
            i++;
        }
        cout<<endl;
    }
}
