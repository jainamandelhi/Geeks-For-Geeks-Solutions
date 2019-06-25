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
        double n;
        cin>>n;
        if(log2(n)/3==int(log2(n)/3))
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
}
