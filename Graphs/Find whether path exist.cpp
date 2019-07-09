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
        ll arr[n][n];
        pair<ll,ll>src,des;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==1)
                    src=mp(i,j);
                if(arr[i][j]==2)
                        des=mp(i,j);
            }
        }
       // cout<<"dgdgdg"<<endl;
        queue<pair<ll,ll> >q;
        q.push(src);
        ll ans=0;
        vector<vector<ll> >vis(n,vector<ll>(n));
        //cout<<src.first<<" "<<src.second<<endl;
        while(!q.empty())
        {
            ll fi=q.front().first;
            ll se=q.front().second;
            q.pop();
           // cout<<fi<<" "<<se<<endl;
            if(fi==des.first && se==des.second)
            {
                ans=1;
                break;
            }
            vis[fi][se]=1;
            if(fi-1>=0 && !vis[fi-1][se] && arr[fi-1][se]!=0)
                q.push(mp(fi-1,se));
            if(fi+1<n && !vis[fi+1][se] && arr[fi+1][se]!=0)
                q.push(mp(fi+1,se));
            if(se-1>=0 && !vis[fi][se-1] && arr[fi][se-1]!=0)
                q.push(mp(fi,se-1));
            if(se+1<n && !vis[fi][se+1] && arr[fi][se+1]!=0)
                q.push(mp(fi,se+1));
        }
        cout<<ans<<endl;
    }
}
