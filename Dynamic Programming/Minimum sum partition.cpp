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
        cin>>n;
        ll arr[n],sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        vector<vector<bool> >v(n+1,vector<bool>(sum+1));
        v[0][0]=true;
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=sum;j++)
            {
                if(i>0 && v[i-1][j])
                {
                    v[i][abs(j-arr[i-1])]=true;
                    v[i][j+arr[i-1]]=true;
                }
            }
        }
        for(ll i=0;i<=sum;i++)
            if(v[n][i])
            {
                cout<<i<<endl;
                break;
            }
    }
    return 0;
}
