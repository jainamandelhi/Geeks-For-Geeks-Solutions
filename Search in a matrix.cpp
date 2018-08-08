#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int **arr=new int*[n];
        for(int i=0;i<n;i++)
            arr[i]=new int[m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        int x;
        cin>>x;
        int i=0,j=0;
        while(i+1<n && arr[i+1][j]<=x )
            i++;
        while(j<m && arr[i][j]<x)
            j++;
        if(arr[i][j]==x)
        {
            cout<<1<<endl;
            continue;
        }
        cout<<0<<endl;
    }
	//code
	return 0;
}
