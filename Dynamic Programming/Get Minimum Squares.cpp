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
        ll arr[n+1];
        arr[0]=0;
        arr[1]=1;
        for(ll i=2;i<=n;i++)
        {
            arr[i]=i;
            for(ll j=1;j<=sqrt(i);j++)
                arr[i]=min(arr[i],1+arr[i-j*j]);
        }
        cout<<arr[n]<<endl;
    }
}
