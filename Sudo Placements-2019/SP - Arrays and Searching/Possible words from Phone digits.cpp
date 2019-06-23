#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
void dfs(ll *arr,vector<char>v[],string s,int index,int n)
{
    if(index==n)
    {
        cout<<s<<" ";
        return;
    }
    for(ll i=0;i<v[arr[index]].size();i++)
    {
        dfs(arr,v,s+v[arr[index]][i],index+1,n);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        vector<char>v[]={{},{},{'a','b','c'},
        {'d','e','f'},
        {'g','h','i'},
        {'j','k','l',},
        {'m','n','o',},
        {'p','q','r','s'},
        {'t','u','v'},
        {'w','x','y','z'}};
        dfs(arr,v,"",0,n);
        cout<<endl;
    }
}
