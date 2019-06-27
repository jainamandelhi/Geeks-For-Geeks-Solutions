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
int toint(string s)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
        ans=ans*10+(s[i]-'0');
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        priority_queue<ll,vector<ll>,greater<ll> >q;
        ll k,n;
        cin>>k>>n;
        for(ll i=1;i<=n;i++)
        {
            ll a;
            cin>>a;
            if(i<k)
            {
                q.push(a);
                cout<<-1<<" ";
                continue;
            }
            if(i==k)
            {
                q.push(a);
                cout<<q.top()<<" ";
                continue;
            }
            if(a<q.top())
            {
                cout<<q.top()<<" ";
                continue;
            }
            q.pop();
            q.push(a);
            cout<<q.top()<<" ";
        }
        cout<<endl;
    }
}
