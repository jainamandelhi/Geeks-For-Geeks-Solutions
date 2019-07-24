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
        map<char,ll>m;
        ll n=s.size();
        for(ll i=0;i<n;i++)
            m[s[i]]++;
        for(ll i=0;i<n;i++)
        {
            if(m[s[i]])
            {
                cout<<s[i];
                m[s[i]]=0;
            }
        }
        cout<<endl;
    }
}
