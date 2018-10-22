#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int v[n+1][m+1];
        for(int i=0;i<=n;i++)
            v[i][0]=0;
        for(int i=0;i<=m;i++)
            v[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                    v[i][j]=v[i-1][j-1]+1;
                else
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
    }
	//code
	return 0;
}
