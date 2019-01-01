#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector< ll> >v(n);
    while(1)
    {
        ll a,b;
        cin>>a>>b;
        if(a==-1)
            break;
        v[a].pb(b);
    }
    vector<ll>visited(n);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(!visited[i])
        {
            stack<ll>s;
            s.push(i);
            while(!s.empty())
            {
                ll top=s.top();
                s.pop();
                visited[top]=1;
                for(ll j=0;j<v[top].size();j++)
                    if(visited[v[top][j]]==0)
                        s.push(v[top][j]);
            }
            ans=i;
        }
    }
    vector<int>visitor(n);
    stack<ll>s;
    s.push(ans);
    while(!s.empty())
    {
        ll top=s.top();
        s.pop();
        visitor[top]=1;
        for(ll j=0;j<v[top].size();j++)
            if(visitor[v[top][j]]==0)
                s.push(v[top][j]);
    }
    for(ll i=0;i<n;i++)
    {
        if(visitor[i]==0)
            return 0;
    }
    cout<<ans;
}
