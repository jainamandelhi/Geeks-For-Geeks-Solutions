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
    ll t,flag;
    cin>>t;
    while(t--)
    {
        ll q,n;
        cin>>q>>n;
        ll m=9;
        //queue<ll>q;
        if(n==0 || q*9<n)
        {
            cout<<-1<<endl;
            continue;
        }
        while(q--)
        {
            while(n-m<0)
                m--;
            n-=m;
            cout<<m;
        }
        cout<<endl;
    }
}
