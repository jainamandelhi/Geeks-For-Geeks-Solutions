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
        ll n,m,k;
        cin>>n>>m>>k;
        ll arr[n],arr1[m];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<m;i++)
            cin>>arr1[i];
        map<ll,ll>ma,m1;
        for(ll i=0;i<m;i++)
            m1[arr1[i]]++;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            if(m1[k-arr[i]])
            {
                v.pb(mp(arr[i],k-arr[i]));
            }
        }
        sort(v.begin(),v.end());
        if(v.size()==0)
            cout<<-1;
        else
        {
            for(ll i=0;i<v.size();i++)
            {
                cout<<v[i].first<<" "<<v[i].second;
                if(i==v.size()-1)
                    break;
                cout<<','<<" ";
            }
        }
        cout<<endl;
    }
}
