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
        ll w;
        cin>>n>>w;
        ll weights[n],values[n];
        for(ll i=0;i<n;i++)
            cin>>values[i];
        for(ll i=0;i<n;i++)
            cin>>weights[i];
        vector<vector<ll> >v(n+1,vector<ll>(w+1));
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=w;j++)
            {
                if(j<weights[i-1])
                {
                    v[i][j]=v[i-1][j];
                    continue;
                }
                v[i][j]=max(v[i-1][j],values[i-1]+v[i][j-weights[i-1]]);
            }
        }
        cout<<v[n][w]<<endl;
    }
}
