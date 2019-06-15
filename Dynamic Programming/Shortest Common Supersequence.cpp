#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll n;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        ll n=s1.size();
        ll m=s2.size();
        ll v[n+1][m+1];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                    v[i][j]=max(i,j);
                else if(s1[i-1]==s2[j-1])
                    v[i][j]=v[i-1][j-1]+1;
                else
                    v[i][j]=min(v[i][j-1]+1,1+v[i-1][j]);
            }
        }
        /*for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=m;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<v[n][m]<<endl;
    }
    return 0;
}
