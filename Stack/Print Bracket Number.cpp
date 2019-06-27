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
void dfs(string s1,int i,int n)
{
    if(i==n)
    {
        cout<<s1<<" ";
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(s1[i],s1[j]);
        dfs(s1,i+1,n);
    }
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
        stack<int>st;
        ll ans=1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='('){
                cout<<ans<<" ";
                st.push(ans++);
            }
            else if(s[i]==')'){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        cout<<endl;
    }
}
