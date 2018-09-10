#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<vector<long long> >arr(k+1,vector<long long>(n+1,0));
        for(long long i=0;i<=n;i++)
            arr[0][i]=1;
        for(long long i=1;i<=k;i++)
        {
            for(long long j=i;j<=n;j++)
            {
                if(i==j)
                    arr[i][j]=1;
                else
                    arr[i][j]=arr[i-1][j-1]+arr[i][j-1];
            }
        }
        cout<<arr[k][n]<<endl;
      /* for(long long i=0;i<=k;i++)
       {
           for(long long j=0;j<=n;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
       }*/
    }
	//code
	return 0;
}
