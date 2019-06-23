#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
ll ans=0;
ll dfs(ll l,ll b)
{
    if(l==0 && b==0)
        return 1;
    if(l<0 || b<0)
        return 0;
    return dfs(l-4,b) + dfs(l,b-1) + dfs(l-1,b) + dfs(l-1,b-4);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>v;
        ll j;
        cin>>j;
        for(ll i=0;i<j;i++)
        {
            string s;
            cin>>s;
            v.pb(s);
        }
        sort(v.begin(),v.end());
       /* for(ll i=0;i<j;i++)
            cout<<v[i]<<" ";
        cout<<endl;*/
        ll n=v[0].size(),m=v[j-1].size();
       // cout<<v[0]<<" "<<v[j-1]<<endl;
        string ans="";
        for(ll i=0;i<min(n,m);i++)
        {
            if(v[0][i]==v[j-1][i])
                ans+=v[0][i];
            else
                break;
        }
        if(!ans.size())
            ans="-1";
        cout<<ans<<endl;
    }
}
