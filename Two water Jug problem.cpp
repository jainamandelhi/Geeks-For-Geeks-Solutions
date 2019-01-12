#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
       return a;
    return gcd(b, a%b);
}
ll solve(ll n, ll m,ll d)
{
  ll cnt=0;
  ll a=0,b=0;
  while(1)
  {
      //cout<<a<<" "<<b<<endl;
    if(a==d || b==d)
        return cnt;
    cnt++;
    if(a==0)
        a=n;
    else if(b<m)
    {
        ll temp=b;
        b+=min(a,m-b);
        a-=min(a,m-temp);
    }
    else if(b==m)
    {
        b=0;
    }
  }
}
int main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,d;
        cin>>m>>n>>d;
        if(d>max(m,n))
        {
            cout<<-1<<endl;
            continue;
        }
        ll a=gcd(n,m);
        if(d%a!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        a=solve(n,m,d);
       // cout<<a;
        ll b=solve(m,n,d);
        if(a>b)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}
