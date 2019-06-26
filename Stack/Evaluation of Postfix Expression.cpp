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
        string s;
        cin>>s;
        stack<float>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b+a);
            }
            else if(s[i]=='-')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b-a);
            }
            else if(s[i]=='/')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b/a);
            }
            else if(s[i]=='*')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b*a);
            }
            else
                st.push(s[i]-'0');
        }
        cout<<st.top()<<endl;
    }
}
