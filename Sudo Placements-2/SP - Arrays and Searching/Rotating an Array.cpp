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
        ll n,k;
        cin>>n;
        ll arr[n],arr1[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        for(ll i=0;i<n;i++)
        {
            if(i-k<0)
                arr1[n+i-k]=arr[i];
            else
                arr1[i-k]=arr[i];
        }
        for(ll i=0;i<n;i++)
            cout<<arr1[i]<< " ";
        cout<<endl;
    }
}
