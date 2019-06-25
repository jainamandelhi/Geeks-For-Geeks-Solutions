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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        stack<ll>st;
        while(n)
        {
            ll a=(n&1);
           // cout<<a<<" ";
            st.push(a);
            n>>=1;
        }
        for(int i=st.size();i<32;i++)
            st.push(0);
        ll i=0;
        ll ans=0;
        while(!st.empty())
        {
            ll top=st.top();
            ans+=top*pow(2,i);
            i++;
            st.pop();
           // cout<<i<<" ";
        }
        cout<<ans<<endl;
    }
}
