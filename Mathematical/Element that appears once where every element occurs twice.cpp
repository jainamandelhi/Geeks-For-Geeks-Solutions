#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
using namespace std;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],ans=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            ans^=arr[i];
        }
        cout<<ans<<endl;
    }
}
