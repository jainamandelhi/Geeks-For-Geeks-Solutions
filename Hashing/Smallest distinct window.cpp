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
        string s;
        cin>>s;
        ll n=s.size();
        ll m[200];
        ll m1[200];
        for(ll i=0;i<200;i++)
        {
            m[i]=0;
            m1[i]=0;
        }
        ll si=0;
        for(ll i=0;i<n;i++){
            if(m[s[i]]==0)
                si++;
            m[s[i]]++;
        }
        ll i=0,j=-1,cnt=0,maxi=INT_MAX;
        while(i<n && j<n)
        {
            if(cnt==si)
            {
                if(j-i+1<maxi)
                {
                    maxi=j-i+1;
                }
                m1[s[i]]--;
                if(m1[s[i]]==0)
                {
                    cnt--;
                }
                i++;
            }
            else
            {
                j++;
                if(m1[s[j]]==0)
                    cnt++;
                m1[s[j]]++;
            }
        }
        cout<<maxi<<endl;
    }
}
