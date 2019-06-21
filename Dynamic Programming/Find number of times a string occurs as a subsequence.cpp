#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll m;
        cin>>m;
        ll n;
        cin>>n;
        string s,s1;
        cin>>s1>>s;
        vector<vector<ll> >v(n+1,vector<ll>(m+1));
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=m;j++)
            {
                if(i==0)
                    v[i][j]=1;
                else if(j==0)
                    continue;
                else if(s[i-1]==s1[j-1])
                    v[i][j]=v[i-1][j-1]+v[i][j-1];
                else
                    v[i][j]=v[i][j-1];
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
}
