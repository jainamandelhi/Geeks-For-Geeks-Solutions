#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
    {
        int n,m;
        cin>>n>>m;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int sum=0,j,flag=0;
            for(j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum>=m)
                    break;
            }
            if(sum==m)
            {
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
            if(i==n-1)
            cout<<-1<<endl;
        }
    }
	//code
	return 0;
}
