#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        ll n=s1.size();
        ll m=s2.size();
        map<char,ll>m1,m2;
        for(ll i=0;i<m;i++)
            m2[s2[i]]++;
        ll si=m2.size();
        //cout<<m2.size()<<endl;
        ll i=0,j=-1,a=-1,b=-1,maxi=INT_MAX,cnt=0;
        while(i<n && j<n)
        {
            if(cnt==si)
            {
                if(j-i<maxi)
                {
                  //  cout<<i<<" "<<j<<endl;
                    maxi=j-i;
                    a=i;
                    b=j;
                }
                m1[s1[i]]--;
                if(m1[s1[i]]<m2[s1[i]] && m2[s1[i]])
                {
                    cnt--;
                }
                i++;
            }
            else
            {
                j++;
                m1[s1[j]]++;
                if(m1[s1[j]]==m2[s1[j]] && m2[s1[j]])
                    cnt++;
            }
        }
        if(a==-1 && b==-1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(ll i=a;i<=b;i++)
            cout<<s1[i];
        cout<<endl;
    }
}
