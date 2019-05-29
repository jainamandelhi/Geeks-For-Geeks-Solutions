#include<bits/stdc++.h>
#define ll long long
#define mp make_par
#define pb push_back
using namespace std;
vector<vector<ll> >v;
ll n,m;
ll dfs(ll i,ll j)
{
    if(i==0 || j==0)
        return 1;

    return dfs(i-1,j)+dfs(i,j-1);
}
void solve()
{
	cin>>n>>m;
	v=vector<vector<ll> >(n,vector<ll>(m));
	cout<<dfs(n-1,m-1)<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
