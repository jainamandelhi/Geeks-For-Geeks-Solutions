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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll fr[n],la[n];
        fr[0]=arr[0];
        la[n-1]=arr[n-1];
        for(ll i=1;i<n;i++)
            fr[i]=arr[i]+fr[i-1];
        for(ll i=n-2;i>=0;i--)
            la[i]=arr[i]+la[i+1];
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            if(fr[i]==la[i])
            {
                cout<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<-1;
        cout<<endl;
    }
}
