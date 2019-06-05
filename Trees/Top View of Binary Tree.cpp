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
    ll n,a=1;
    cin>>n;
    vector<ll>arr(n+1);
    for(ll i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(ll j=i;j<=n;j=j+i)
                arr[j]=a;
            a++;
        }
    }
    for(ll i=2;i<=n;i++)
        cout<<arr[i]<<" ";
}
