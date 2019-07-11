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
        ll n;
        cin>>n;
        ll v[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                ll a;
                cin>>a;
                v[i][j]=a;
            }
        }
        priority_queue<pair<ll,pair<ll,ll> >,vector<pair<ll,pair<ll,ll> > >,greater<pair<ll,pair<ll,ll> > > >q;
        q.push(mp(v[0][0],mp(0,0)));
        vector<vector<ll> >vis(n,vector<ll>(n));
        while(!q.empty())
        {
            ll fi=q.top().first;
            ll se1=q.top().second.first;
            ll se2=q.top().second.second;
            q.pop();
            if(vis[se1][se2])
                continue;
            v[se1][se2]=fi;
            vis[se1][se2]=1;
            if(se1==n-1 && se2==n-1)
                break;
            if(se1+1<n && !vis[se1+1][se2])
            {
                q.push(mp(fi+v[se1+1][se2],mp(se1+1,se2)));
            }
            if(se1-1>=0 && !vis[se1-1][se2])
            {
                q.push(mp(fi+v[se1-1][se2],mp(se1-1,se2)));
            }
            if(se2+1<n && !vis[se1][se2+1])
            {
                q.push(mp(fi+v[se1][se2+1],mp(se1,se2+1)));
            }
            if(se2-1>=0 && !vis[se1][se2-1])
            {
                q.push(mp(fi+v[se1][se2-1],mp(se1,se2-1)));
            }
        }
        cout<<v[n-1][n-1]<<endl;
    }
}
