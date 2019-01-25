#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}

// Time complexity can be reduced to O(VE) by using adjacency list.

int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll v,e;
        cin>>v>>e;
        ll arr[v][v];
        for(ll i=0;i<v;i++)
            for(ll j=0;j<v;j++)
                arr[i][j]=INT_MAX;
        for(ll i=0;i<e;i++)
        {
            ll a,b,w;
            cin>>a>>b>>w;
            arr[a][b]=w;
        }
        int flag=1;
        vector<ll>ans(v,INT_MAX);
        ans[0]=0;
        for(ll k=0;k<v;k++)
        {
            flag=1;
            for(ll i=0;i<v;i++)
            {
                for(ll j=0;j<v;j++)
                {
                    if(arr[i][j]==INT_MAX)
                        continue;
                    if(ans[j]>ans[i]+arr[i][j])
                        flag=0;
                    ans[j]=min(ans[j],ans[i]+arr[i][j]);
                }
            }
        }
        if(flag==0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
