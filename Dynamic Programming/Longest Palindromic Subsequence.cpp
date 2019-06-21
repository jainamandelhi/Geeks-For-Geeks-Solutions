#include<bits/stdc++.h>
using namespace std;
int dfs(string &s,int i,int n,vector<vector<int> >&v)
{
    if(i==n)
        return 1;
    else if(i>n)
        return 0;
    if(v[i][n]!=-1)
        return v[i][n];
    if(s[i]==s[n])
        v[i][n]=2+dfs(s,i+1,n-1,v);
    else
        v[i][n]=max(dfs(s,i+1,n,v) , dfs(s,i,n-1,v));
    return v[i][n];
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       int n=s.size();
       vector<vector<int> >v(n+1,vector<int>(n+1,-1));
       cout<<dfs(s,0,n-1,v)<<endl;
   }
}
