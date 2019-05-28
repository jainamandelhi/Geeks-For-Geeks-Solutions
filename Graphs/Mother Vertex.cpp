#include<bits/stdc++.h>
#define ll long long
#define mp make_par
#define pb push_back
using namespace std;
vector<vector<ll> >v;
vector<vector<ll> >vis;
ll n,m,grp=0,ans=0;
void dfs(ll i,ll j, ll temp)
{
    vis[i][j]=1;
	if(i+1<n && v[i+1][j]==1 && vis[i+1][j]==0)
	{
		vis[i+1][j]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i+1,j,temp);
	}
	if(j+1<m && v[i][j+1]==1 && vis[i][j+1]==0)
	{
		vis[i][j+1]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i,j+1,temp);
	}
	if(i-1>=0 && v[i-1][j]==1 && vis[i-1][j]==0)
	{
		vis[i-1][j]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i-1,j,temp);
	}
	if(j-1>=0 && v[i][j-1]==1 && vis[i][j-1]==0)
	{
		vis[i][j-1]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i,j-1,temp);
	}
	if(i+1<n && j+1<m && vis[i+1][j+1]==0 && v[i+1][j+1]==1)
	{
		vis[i+1][j+1]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i+1,j+1,temp);
	}
	if(i+1<n && j-1>=0 && vis[i+1][j-1]==0 && v[i+1][j-1]==1)
	{
		vis[i+1][j-1]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i+1,j-1,temp);
	}
	if(i-1>=0 && j-1>=0 && vis[i-1][j-1]==0 && v[i-1][j-1]==1)
	{
		vis[i-1][j-1]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i+1,j-1,temp);
	}
	if(i-1>=0 && j+1<m && vis[i-1][j+1]==0 && v[i-1][j+1]==1)
	{
		vis[i-1][j+1]=1;
		temp++;
		ans=max(ans,temp);
		dfs(i-1,j+1,temp);
	}
}
void solve()
{
	cin>>n>>m;
	v=vector<vector<ll> >(n,vector<ll>(m));
	vis=vector<vector<ll> >(n,vector<ll>(m));
	for(ll i=0;i<n;i++)
		for(ll j=0;j<m;j++)
			cin>>v[i][j];
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			ll temp=1;
			if(v[i][j]==1 && vis[i][j]==0)
			{
			    //cout<<"a";
				grp++;
				dfs(i,j,temp);
				ans=max(ans,temp);
			}
		}
	}
	cout<<grp<<" "<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
