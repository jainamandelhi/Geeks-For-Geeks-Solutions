#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll maxi=0;
        map<ll,ll>m;
        ll sum=0;
        ll p=1;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a==k)
                maxi=max(maxi,p);
            sum+=a;
            if(!m[sum])
                m[sum]=i+1;
            if(sum==k)
            {
                maxi=max(maxi,i+1);
            }
            if(m[sum-k])
            {
                maxi=max(maxi,abs(i+1-m[sum-k]));
            }
        }
        cout<<maxi<<endl;
    }
}
