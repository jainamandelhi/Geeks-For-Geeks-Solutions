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
    memset(arr,1,sizeof(arr));
    for(ll i=2;i<=sqrt(10000);i++)
    {
        for(ll p=i*i;p<=10000;p+=i)
            arr[p]=0;
    }
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=2;i<=10000;i++)
        {
            if(arr[i] && n%i==0)
            {
                ll ans=0;
                while(n%i==0)
                {
                    n/=i;
                    ans++;
                }
                cout<<i<<" "<<ans<<" ";
            }
            if(n==1)
                break;
        }
        cout<<endl;
    }
}
