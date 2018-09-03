#include <bits/stdc++.h>
using namespace std;
int bs(int arr[],int no,int start,int last)
{
    int mid=start+(last-start)/2;
    if(start>last)
        return -1;
    if(arr[mid]==no)
        return 1;
    else if(arr[mid]>no)
        return bs(arr,no,start,mid-1);
    else
        return bs(arr,no,mid+1,last);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,flag=0;
        cin>>n>>m;
        int *arr1=new int[n];
        int *arr2=new int[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        sort(arr1,arr1+n);
        int ans;
        for(int i=0;i<m;i++)
        {
             ans=bs(arr1,arr2[i],0,n-1);
            if(ans==-1)
                break;
        }
        if(ans==-1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
	//code
	return 0;
}
