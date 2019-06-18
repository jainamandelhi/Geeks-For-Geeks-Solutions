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
        string s;
        cin>>s;
        ll n=s.size();
        vector<int>ans(2*n+2,INT_MAX);
        string s1="";
        s1+=s[0];
        ans[0]=1;
        //cout<<s1<<endl;
        for(int i=1;i<n;i++)
        {
            ans[i]=min(ans[i],ans[i-1]+1);
            string s2="";
           // cout<<ans[i]<<endl;
            if(2*i<=n)
                s2=s.substr(0,2*i);
           // cout<<s2<<endl;
            if(s2==s1+s1){
                ans[2*i-1]=min(ans[2*i-1],ans[i-1]+1);
            }
                s1+=s[i];
        }
        cout<<ans[n-1]<<endl;
    }
}
