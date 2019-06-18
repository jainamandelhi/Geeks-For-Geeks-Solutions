#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,char> >v;
        vector<pair<ll,char> >v1;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.pb(mp(a,'q'));
            v1.pb(mp(a,'q'));
        }
        v[0].second='i';
        v1[0].second='d';
        vector<ll>l1(n,1);
        vector<ll>l2(n,1);
        char a1='i',a2='d';
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(v[j].second=='i' && v[i].first>v[j].first && l1[j]+1>l1[i])
                {
                    l1[i]=l1[j]+1;
                    v[i].second='d';
                }
                if(v[j].second=='d' && v[i].first<v[j].first && l1[j]+1>l1[i])
                {
                    l1[i]=l1[j]+1;
                    v[i].second='i';
                }
                if(v1[j].second=='i' && v1[i].first>v1[j].first && l2[j]+1>l2[i])
                {
                    l2[i]=l2[j]+1;
                    v1[i].second='d';
                }
                if(v1[j].second=='d' && v1[i].first<v1[j].first && l2[j]+1>l2[i])
                {
                    l2[i]=l2[j]+1;
                    v1[i].second='i';
                }
            }
        }
        ll maxi=-1;
        for(int i=0;i<n;i++)
            maxi=max(maxi,max(l1[i],l2[i]));
        cout<<maxi<<endl;
    }
}
