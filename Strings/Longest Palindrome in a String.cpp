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
    //cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        ll dp[n+1][n+1];
        for(ll i=0;i<=n;i++)
            for(ll j=0;j<=n;j++)
                dp[i][j]=0;
        for(ll d=0;d<=n;d++)
        {
            ll i=0,j=0;
            while(i+d<n)
            {
                if(d==0)
                    dp[i][j]=1;
                else if(d==1 && s[i+d]==s[j])
                    dp[i+d][j]=1;
                else
                {
                    if(s[i+d]==s[j] && dp[i+d-1][j+1])
                        dp[i+d][j]=1;
                }
                i++;
                j++;
            }
        }
        ll maxi=0,i=0,j=0;
        for(ll p=0;p<n;p++)
        {
            for(ll q=p;q<n;q++)
            {
                if(dp[q][p]==1 && q-p+1>maxi)
                {
                    maxi=q-p+1;
                    i=p;
                    j=q;
                }
            }
        }
        for(ll p=i;p<=j;p++)
            cout<<s[p];
        cout<<endl;
    }
}
