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
        ll n,m;
        cin>>n>>m;
        ll arr[n],arr1[m];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<m;i++)
            cin>>arr1[i];
        ll sum=0,sum1=0;
        for(ll i=0;i<n;i++)
            sum+=arr[i];
        for(ll i=0;i<m;i++)
            sum1+=arr1[i];
        map<ll,ll>ma;
        for(ll i=0;i<n;i++)
            ma[arr[i]]++;
        int flag=1;
        for(ll i=0;i<m;i++)
        {
            if(ma[(sum-sum1+2*arr1[i])/2])
            {
                flag=0;
                cout<<1<<endl;
                break;
            }
        }
        if(flag)
            cout<<-1<<endl;
    }
}
