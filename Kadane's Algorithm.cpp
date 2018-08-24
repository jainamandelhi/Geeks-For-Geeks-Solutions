#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            flag=1;
        }
        if(!flag)
        {
            sort(arr,arr+n);
            cout<<arr[n-1]<<endl;
            continue;
        }
        int max_here=0,max_end=0;
        for(int i=0;i<n;i++)
        {
            max_here+=arr[i];
            if(max_here<0)
                max_here=0;
            if(max_here>max_end)
                max_end=max_here;
        }
        cout<<max_end<<endl;
    }
	//code
	return 0;
}
