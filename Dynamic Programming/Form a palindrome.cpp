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
        string s;
        cin>>s;
        s=" "+s;
        ll n=s.size();
        vector<vector<ll> >v(n,vector<ll>(n));
        for(ll i=0;i<n;i++)
            v[0][i]=INT_MAX;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(j==j+i-1)
                {
                    v[j][j+i-1]=0;
                }
                if(j+i<n && s[j]==s[j+i])
                    v[j][j+i]=v[j+1][j+i-1];
                else if(j+i<n)
                    v[j][j+i]=1+min(v[j][j+i-1],v[j+1][j+i]);
            }
        }
        /*for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<v[1][n-1]<<endl;
    }
}
