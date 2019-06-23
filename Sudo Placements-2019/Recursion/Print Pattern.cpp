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
void dfs(ll n,ll ans, ll flag)
{
    if(n==ans)
    {
        cout<<n;
        return;
    }
    cout<<ans<<" ";
    if(ans>0 && flag)
        dfs(n,ans-5,1);
    else
        dfs(n,ans+5,0);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=n;
        if(ans>0)
            ans=ans-5;
        else
            ans+=5;
            cout<<n<<" ";
        dfs(n,ans,1);
        cout<<endl;
    }
}
