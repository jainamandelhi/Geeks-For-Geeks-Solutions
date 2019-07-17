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
    //cin.ignore();
    while(t--)
    {
        string s;
       cin>>s;
        map<char,int>m;
        ll i=0,j=1;
        if(s.size()==1)
        {
            cout<<1<<endl;
            continue;
        }
        m[s[i]]++;
        ll temp=1,ans=0;
        ll n=s.size();
        while(j<n && i<n)
        {
           // cout<<i<<" "<<j<<" "<<ans<<endl;
            if(m[s[j]]==0)
            {
                m[s[j]]++;
                j++;
                temp++;
            }
            else
            {
                ans=max(ans,temp);
               // cout<<i<<" "<<j<<" "<<temp<<" "<<ans<<endl;
                temp--;
                m[s[i]]--;
                i++;
            }
        }
        cout<<max(ans,temp)<<endl;
    }
}
