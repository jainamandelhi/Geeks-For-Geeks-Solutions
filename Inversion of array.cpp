#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int count1=0;
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                count1++;
        }
        cout<<count1<<endl;
    }
	//code
	return 0;
}
