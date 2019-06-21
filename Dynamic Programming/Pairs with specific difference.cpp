#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll k;
        cin>>k;
        vector<ll>v(n+1);
        for(ll i=2;i<=n;i++)
        {
            if(arr[i-1]-arr[i-2]<k)
                v[i]=v[i-2]+arr[i-1]+arr[i-2];
            else
                v[i]=v[i-1];
        }
        cout<<v[n]<<endl;
    }
}
