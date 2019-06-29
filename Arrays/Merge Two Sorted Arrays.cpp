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
        ll s1=0,s2=0;
        while(s1<n && s2<m)
        {
            if(arr[s1]<arr1[s2])
            {
                cout<<arr[s1]<<" ";
                s1++;
            }
            else
            {
                cout<<arr1[s2]<<" ";
                s2++;
            }
        }
        while(s1<n)
            cout<<arr[s1++]<<" ";
        while(s2<m)
            cout<<arr1[s2++]<<" ";
        cout<<endl;
    }
}
