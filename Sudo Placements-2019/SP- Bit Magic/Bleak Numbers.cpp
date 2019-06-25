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
ll arr[10001];
int main()
{
    ll t;
    cin>>t;
    arr[1]=2;
    for(ll i=2;i<=10001;i++)
    {
        ll j=i;
        ll ans=0;
        while(j)
        {
            if((j&1)==1)
                ans++;
            j>>=1;
        }
        arr[i]=ans+i;
    }
    while(t--)
    {
        ll n,flag=0;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            if(arr[i]==n)
            {
                cout<<0;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<1;
        cout<<endl;
    }
}
