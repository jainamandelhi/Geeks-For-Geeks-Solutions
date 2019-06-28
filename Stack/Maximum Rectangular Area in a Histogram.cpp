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
        ll n;
        cin>>n;
        ll arr[n],maxi=-1;
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        stack<int>s;
        for(ll i=0;i<n;)
        {
           // cout<<i<<" ";
            if(i==0)
            {
                s.push(i++);
                continue;
            }
            if(!s.empty() && arr[i]<arr[s.top()])
            {
                ll a=s.top();
               // while(!s.empty() && arr[a]<=arr[s.top()])
                    s.pop();
                if(s.size()==0)
                    maxi=max(maxi,arr[a]*i);
                else
                    maxi=max(maxi,arr[a]*(i-s.top()-1));
            }
            else
            {
                s.push(i);
                i++;
            }
        }
        while(!s.empty())
        {
            ll a=s.top();
            //while(!s.empty() && arr[a]<=arr[s.top()])
                s.pop();
            if(s.size()==0)
                maxi=max(maxi,arr[a]*(n));
            else
                maxi=max(maxi,arr[a]*(n-s.top()-1));
        }
        cout<<maxi<<endl;
    }
}
