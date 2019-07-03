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
void dfs(ll arr[],ll st,ll en)
{
    if(st>en)
        return;
    ll mid=st+(en-st)/2;
    cout<<arr[mid]<<" ";
    dfs(arr,st,mid-1);
    dfs(arr,mid+1,en);
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
        dfs(arr,0,n-1);
        cout<<endl;
    }
}
