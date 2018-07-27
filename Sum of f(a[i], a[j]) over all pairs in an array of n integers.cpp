#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,sum=0;
        cin>>n;
        vector<int>arr(n);
        for(int j=0;j<n;j++)
        cin>>arr[j];
        for(int j=1;j<n;j++)
        {
            for(int k=j-1;k>=0;k--)
            {
                if(abs(arr[j]-arr[k])>1)
                sum+=arr[j]-arr[k];
            }
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}
