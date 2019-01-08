#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
void fun(int i,int j,vector<vector<int> >v,vector<vector<int> >&arr)
{
    arr[i][j]=1;
    for(int k=0;k<v[j].size();k++)
        if(arr[i][v[j][k]]==0)
            fun(i,v[j][k],v,arr);
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int> >v(n);
    for(int i=0;i<5;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
    }
    vector<vector<int> >arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
        arr[i][i]=1;
    for(int i=0;i<n;i++)
    {
        fun(i,i,v,arr);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
