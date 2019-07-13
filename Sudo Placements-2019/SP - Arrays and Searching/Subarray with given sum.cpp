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
//ll arr[10000002];
int main()
{
    fast;
    ll t;
    cin>>t;
   while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll i=0,j=i+1;
        ll sum=arr[i];
        while(j<n)
        {
            if(sum+arr[j]==s)
                break;
            if(sum+arr[j]>s)
            {
                sum-=arr[i];
                i++;
            }
            else
            {
                sum+=arr[j];
                j++;
            }
        }
        if(j==n)
            cout<<-1<<endl;
        else
            cout<<i+1<<" "<<j+1<<endl;
    }
}
