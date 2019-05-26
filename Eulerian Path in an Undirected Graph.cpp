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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll v[n][n];
        ll temp=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            temp=0;
            for(ll j=0;j<n;j++)
            {
                cin>>v[i][j];
                if(v[i][j]==1)
                    temp++;
            }
            if(temp%2)
                ans++;
        }
        if(ans==2)
            cout<<1;
        else
            cout<<0;
        cout<<endl;
    }
    return 0;
}
