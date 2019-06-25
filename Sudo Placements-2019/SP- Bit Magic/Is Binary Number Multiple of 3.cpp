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
        ll n=s.size();
        ll o=0,e=0;
        for(ll i=n-1;i>=0;i=i-2)
        {
            if(s[i]=='1')
                o++;
        }
        for(ll i=n-2;i>=0;i=i-2)
        {
            if(s[i]=='1')
                e++;
        }
        if(abs(o-e)%3==0)
            cout<<1;
        else
            cout<<0;
        cout<<endl;
    }
}
