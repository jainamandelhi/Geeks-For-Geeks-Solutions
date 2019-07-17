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
        stack<string>st;
        string s1="";
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='.')
                s1+=s[i];
            else
            {
                st.push(s1);
                s1="";
            }
        }
        st.push(s1);
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
            if(st.size()>0)
                cout<<'.';
        }
        cout<<endl;
    }
}
