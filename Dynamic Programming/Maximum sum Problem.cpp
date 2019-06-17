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
        ll n;
        cin>>n;
        ll v[n+1];
        v[0]=0;
        v[1]=1;
        for(ll i=2;i<=n;i++)
            v[i]=max(i,v[i/2]+v[i/3]+v[i/4]);
        cout<<v[n]<<endl;
    }
}
