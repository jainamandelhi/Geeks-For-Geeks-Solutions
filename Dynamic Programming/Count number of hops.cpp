#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll n;
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
        if(n==0)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<2<<endl;
            continue;
        }
        ll arr[n+1];
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        for(ll i=3;i<=n;i++)
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        cout<<arr[n]<<endl;
    }
    return 0;
}
