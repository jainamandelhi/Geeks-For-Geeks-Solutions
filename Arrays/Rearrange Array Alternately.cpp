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
    ll t,flag;
    fast;
    cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll i=0,j=n-1;
        while(i<j)
        {
            cout<<arr[j--]<<" ";
            cout<<arr[i++]<<" ";
        }
        if(i==j)
            cout<<arr[i];
        cout<<endl;
    }
}
