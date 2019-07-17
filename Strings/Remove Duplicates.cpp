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
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        char ch[256];
        for(ll i=0;i<256;i++)
            ch[i]=0;
        for(ll i=0;i<s.size();i++)
            ch[int(s[i])]++;
        for(ll i=0;i<s.size();i++)
        {
            if(ch[int(s[i])]>0)
            {
                cout<<s[i];
                ch[int(s[i])]=0;
            }
        }
        cout<<endl;
    }
}
