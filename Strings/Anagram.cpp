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
        string s1,s2;
        cin>>s1>>s2;
        ll ch[26];
        for(ll i=0;i<26;i++)
            ch[i]=0;
        ll n=s1.size();
        ll m=s2.size();
        for(ll i=0;i<n;i++)
            ch[s1[i]-'a']++;
        for(ll i=0;i<m;i++)
            ch[s2[i]-'a']--;
        int flag=0;
        for(ll i=0;i<26;i++)
        {
            if(ch[i]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
}
