#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
int mod=1000000007;
int gcd(int a,int b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    fast;
    int t;
    cin>>t;
    unsigned long long ans[10001];
    ans[1]=1;
    unsigned long long a2=1,a3=1,a5=1;
    for(int i=2;i<=10000;i++)
    {
        //cout<<i<<" ";
        unsigned long long mini=min(ans[a2]*2,min(ans[a3]*3,ans[a5]*5));
        ans[i]=mini;
        if(mini==2*ans[a2])
            a2++;
        if(mini==3*ans[a3])
            a3++;
        if(mini==5*ans[a5])
            a5++;
    }
   // for(int i=1;i<=10000;i++)
   //     cout<<ans[i]<<" ";
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
