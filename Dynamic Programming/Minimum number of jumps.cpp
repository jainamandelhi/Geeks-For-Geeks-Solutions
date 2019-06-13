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
   // fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int first[n],second[n];
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            first[i]=a;
            second[i]=INT_MAX;
        }
        second[0]=0;
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(first[j] + j>=i)
                    second[i]=min(1+second[j],second[i]);
            }
        }
        if(second[n-1]<0 || second[n-1]>10000000)
            second[n-1]=-1;
        cout<<second[n-1]<<endl;
    }
    return 0;
}
