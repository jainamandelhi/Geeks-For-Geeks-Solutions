#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll n;
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
        ll n;
        cin>>n;
        vector<vector<ll> >v(n,vector<ll>(n));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
                cin>>v[i][j];
        }
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                ll a=0,b=0,c=0;
                if(j-1>=0)
                    a=v[i-1][j-1];
                if(j+1<n)
                    b=v[i-1][j+1];
                c=v[i-1][j];
                v[i][j]+=max(a,max(b,c));
            }
        }
        cout<<*max_element(v[n-1].begin(),v[n-1].end()) << "\n";
    }
    return 0;
}
