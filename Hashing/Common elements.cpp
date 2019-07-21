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
bool p(pair<ll,ll>a,pair<ll,ll>b)
{
    return a.first>b.first;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n1,n2,n3;
        cin>>n1>>n2>>n3;
        map<ll,ll>m1,m2,m3;
        map<ll,ll>:: iterator itr;
        for(ll i=0;i<n1;i++)
        {
            ll a;
            cin>>a;
            m1[a]++;
        }
        for(ll i=0;i<n2;i++)
        {
            ll a;
            cin>>a;
            m2[a]++;
        }
        for(ll i=0;i<n3;i++)
        {
            ll a;
            cin>>a;
            m3[a]++;
        }
        int flag=1;
        for(itr=m1.begin();itr!=m1.end();itr++)
        {
            if(m2[itr->first] && m3[itr->first])
            {
                cout<<itr->first<<" ";
                flag=0;
            }
        }
        if(flag)
            cout<<-1;
        cout<<endl;
    }
}
