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
        string s;
        cin>>s;
        ll n=s.size();
        vector<ll>dp(n,1);
        //dp[0]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(s[i]>s[j])
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        ll maxi=-1;
        for(ll i=0;i<n;i++)
            maxi=max(dp[i],maxi);
        cout<<maxi<<endl;
    }
}
