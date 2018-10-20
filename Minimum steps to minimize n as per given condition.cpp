#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr=new int[n+1];
        arr[0]=0;
        arr[1]=0;
        for(int i=2;i<=n;i++)
        {
            arr[i]=arr[i-1]+1;
            if(i%2==0)
                arr[i]=min(arr[i],1+arr[i/2]);
            if(i%3==0)
                arr[i]=min(arr[i],1+arr[i/3]);
        }
        cout<<arr[n]<<endl;
    }
	//code
	return 0;
}
