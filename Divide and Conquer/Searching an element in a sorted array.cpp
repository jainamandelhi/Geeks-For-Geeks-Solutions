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
int dfs(ll low,ll high,ll arr[],int m)
{
    ll mid=low+(high-low)/2;
    if(low>high)
        return 0;
    if(m==arr[mid])
        return 1;
    ll a=0,b=0;
    if(m>arr[mid])
        a=a || dfs(mid+1,high,arr,m);
    else
        b=b || dfs(low,mid-1,arr,m);
    return a|| b;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m;
        cin>>m;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        if(dfs(0,n-1,arr,m))
            cout<<1;
        else
            cout<<-1;
        cout<<endl;
    }
}
