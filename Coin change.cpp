#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        int m;
        cin>>m;
        vector<vector<int> > table(n+1, vector<int>(m+1, 0));
        for(int i=0;i<=n;i++)
            table[i][0]=1;
        for(int i=1;i<=m;i++)
            table[0][i]=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(arr[i]<=j)
                    table[i][j]=table[i-1][j]+table[i][j-arr[i]];
                else
                    table[i][j]=table[i-1][j];
            }
            cout<<table[n][m]<<endl;
    }
	//code
	return 0;
}
