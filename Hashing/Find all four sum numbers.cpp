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
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int flag=1;
       // for(ll i=0;i<n;i++)
         //   cout<<arr[i]<<" ";
        //cout<<endl;
        map<pair<pair<ll,ll>,ll>,ll>m;
        for(ll i=0;i<n-3;i++)
        {
            for(ll j=i+1;j<n-2;j++)
            {
                ll p=j+1;
                ll q=n-1;
                ll temp=arr[i]+arr[j];
                while(p<q)
                {
                    if(temp+arr[p]+arr[q]==k && !m[mp(mp(arr[j],arr[p]),arr[q])])
                    {
                        flag=0;
                        m[mp(mp(arr[j],arr[p]),arr[q])]++;
                        cout<<arr[i]<<" "<<arr[j]<<" ";
                        cout<<arr[p]<<" "<<arr[q]<<" ";
                        cout<<'$';
                        p++;
                        q--;
                    }
                    else if(temp+arr[p]+arr[q]<k)
                        p++;
                    else
                        q--;
                }
            }
        }
        if(flag)
            cout<<-1;
        cout<<endl;
    }
}
