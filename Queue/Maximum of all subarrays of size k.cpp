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
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.pb(mp(a,i));
        }
        priority_queue<pair<ll,ll> >q;
        for(ll i=0;i<k;i++)
        {
           q.push(mp(v[i].first,v[i].second));
        }
        ll largest=1;
        cout<<q.top().first<< " " ;
        for(ll i=k;i<n;i++)
        {
            q.push(mp(v[i].first,v[i].second));
            while(q.top().second<largest){
                    q.pop();
            }
            cout<<q.top().first<<" ";
            largest++;
        }
        cout<<endl;
    }
}
