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
        string s;
        cin>>s;
        ll n=s.size();
        vector<ll>vis(1000);
        for(ll i=0;i<n;i++)
            vis[s[i]]++;
        sort(vis.rbegin(),vis.rend());
        if(n%2)
        {
            if (vis[0]<=n/2+1)
                cout<<1;
            else
                cout<<0;
        }
        else
        {
            if(vis[0]<=n/2)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
}
