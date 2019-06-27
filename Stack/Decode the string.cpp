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
        int n=s.size();
        stack<int>no;
        stack<string>ch;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                string t1="";
                while(i<n && s[i]>='0' && s[i]<='9')
                    t1=t1+s[i++];
                i--;
                no.push(toint(t1));
            }
            else
            {
                if(s[i]==']')
                {
                    string temp="";
                    while(ch.top()!="[")
                    {
                        temp=ch.top()+temp;
                        ch.pop();
                    }
                    ch.pop();
                    string temp1="";
                    for(int i=0;i<no.top();i++)
                        temp1=temp1+temp;
                    no.pop();
                    ch.push(temp1);
                }
                else
                {
                    string temp="";
                    temp+=s[i];
                    ch.push(temp);
                }
            }
        }
        cout<<ch.top()<<endl;
    }
}
