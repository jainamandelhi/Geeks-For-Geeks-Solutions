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
int dfs(ll arr[],ll st,ll en,ll k)
{
    if(st>en)
        return -1;
    ll mid=st+(en-st)/2;
    if(arr[mid]>k && mid==st)
        return -1;
    if(arr[mid]<=k && mid==en)
        return mid;
    else if(arr[mid]<=k && mid+1<=en && arr[mid+1]>k)
        return mid;
    else if(arr[mid]<=k)
        return dfs(arr,mid+1,en,k);
    else
        return dfs(arr,st,mid-1,k);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        cout<<dfs(arr,0,n-1,k)<<endl;
    }
}
