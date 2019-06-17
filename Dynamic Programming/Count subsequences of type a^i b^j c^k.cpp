#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int dfs(int sum,vector<vector<int> >&v,int n, int *arr,int index)
{
    if(sum==n)
        return 1;
    if(sum>n || index>2)
        return 0;
    if(v[sum][index]!=-1)
       return v[sum][index];
    int a=dfs(sum+arr[index],v,n,arr,index) + dfs(sum,v,n,arr,index+1);
    v[sum][index]=a;
    return v[sum][index];
return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        ll a=0,b=0,c=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='a')
                a=1+2*a;
            else if(s[i]=='b')
                b=a+2*b;
            else
                c=b+2*c;
        }
        cout<<c<<endl;
    }
}
