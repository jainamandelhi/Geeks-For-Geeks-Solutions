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
        map<char,ll>m;
        for(ll i=0;i<2*n;i++)
        {
            char a;
            cin>>a;
            m[a]++;
        }
        map<char,ll> ::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second==2)
                cout<<itr->first<<" ";
        }
        cout<<endl;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second==2)
                cout<<itr->first<<" ";
        }
        cout<<endl;
    }
}
