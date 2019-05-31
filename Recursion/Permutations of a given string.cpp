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
/*void swap(ll &a,ll &b)
{
    ll temp=a;
    a=b;
    b=temp;
}*/
bool comp(ll i,ll j)
{
    return i>j;
}
map<ll,ll>st;
void dfs(ll i, ll n,string s)
{
    if(i==n){
    cout<<s<<" ";
    return;
    }
    for(ll j=i;j<n;j++)
    {
        swap(s[i],s[j]);
        dfs(i+1,n,s);
    }
}
void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    sort(s.begin(),s.end());
    dfs(0,n,s);
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
