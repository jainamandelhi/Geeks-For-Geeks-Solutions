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
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        //ll arr[n];
        ll cnt=0;
        unordered_map<ll,ll>m;
        ll temp=0;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            temp+=a;
            if(temp==0)
            {
                cnt++;
            }
            if(m[temp])
            {
                cnt+=m[temp];
            }
            m[temp]++;
           // cout<<cnt<<" ";
        }
        cout<<cnt<<endl;
    }
}
