#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr= new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(j+1<n && arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
