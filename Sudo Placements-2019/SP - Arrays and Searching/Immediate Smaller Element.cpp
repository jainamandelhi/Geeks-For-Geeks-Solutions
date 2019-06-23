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
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<-1;
                break;
            }
            if(arr[i]>arr[i+1])
                cout<<arr[i+1]<<" ";
            else
                cout<<-1<<" ";
        }
        cout<<endl;
    }
}
