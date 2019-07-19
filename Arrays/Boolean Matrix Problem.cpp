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
    fast;
    cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        vector<ll>row(n);
        vector<ll>col(m);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(row[i] || col[j])
                    arr[i][j]=1;
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
}
