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
        ll arr[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(ll k=0;k<n;k++)
        {
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++)
                {
                    arr[i][j]=min(arr[i][j],arr[i][k]
                                  +arr[k][j]);
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(arr[i][j]>=10000000)
                    cout<<"INF ";
                else
                    cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
