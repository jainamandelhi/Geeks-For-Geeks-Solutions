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
int toint(string s)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
        ans=ans*10+(s[i]-'0');
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        stack<ll>st;
        st.push(-1);
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='(')
                st.push(i);
            else
            {
                st.pop();
                if(st.size()==0){
                    st.push(i);
                    continue;
                }
                  //  continue;
                ans=max(ans,i-st.top());

            }
           // cout<<st.top()<<" "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}
