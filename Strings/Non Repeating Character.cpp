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
    fast;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll m[26];
        for(ll i=0;i<26;i++)
            m[i]=0;
        for(ll i=0;i<n;i++)
            m[s[i]-'a']++;
        ll flag=1;
        for(ll i=0;i<n;i++)
        {
            if(m[s[i]-'a']==1)
            {
                cout<<s[i];
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<-1;
        cout<<endl;
    }
}
