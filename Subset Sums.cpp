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
ll n;
bool comp(ll i,ll j)
{
    return i>j;
}
map<ll,ll>st;
void dfs(ll i, ll sum,ll arr[])
{
    if(i==n)
    {
        st[sum]++;
        return;
    }
    dfs(i+1,sum+arr[i],arr);
    dfs(i+1,sum,arr);
}
void solve()
{
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    dfs(0,0,arr);
   // cout<<41243431;
    map<ll,ll>::iterator itr;
    for(itr=st.begin();itr!=st.end();itr++)
    {
        while(itr->second!=0)
        {
            cout<<itr->first<<" ";
            itr->second--;
        }
    }
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
