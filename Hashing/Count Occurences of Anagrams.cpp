#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
using namespace std;
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
        string s1;
        cin>>s1;
        ll si=s1.size();
        map<ll,ll>m,m1;
        for(ll i=0;i<si;i++)
        {
            m1[s1[i]]++;
        }
        ll i=0,j=0,cnt=0,rs=m1.size(),ans=0;
        while(i<n && j<n)
        {
            if(j-i+1<si)
            {
                m[s[j]]++;
                if(m[s[j]]==m1[s[j]])
                    cnt++;
                j++;
            }
            else
            {
                m[s[j]]++;
                if(m[s[j]]==m1[s[j]])
                    cnt++;
                if(cnt==rs)
                    ans++;
                if(m[s[i]]==m1[s[i]])
                    cnt--;
                m[s[i]]--;
                j++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
