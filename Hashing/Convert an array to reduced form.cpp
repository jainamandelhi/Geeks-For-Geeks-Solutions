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
        map<ll,ll>m;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        map<ll,ll>::iterator itr;
        ll i=0;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            itr->second=i++;
        }
        for(ll i=0;i<n;i++)
            cout<<m[arr[i]]<<" ";
        cout<<endl;
    }
}
