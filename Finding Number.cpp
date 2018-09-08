#include <iostream>
using namespace std;
int partition(int *arr,int start,int end)
{
    if(start>end)
        return -1;
    int mid=start+(end-start)/2;
   // cout<<mid<<" "<<start<<" "<<end<<" "<<arr[mid]<<endl;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
    else if(arr[mid]<arr[mid-1])
        return partition(arr,start,mid-1);
    else
        return partition(arr,mid+1,end);
}
int bs(int *arr,int start,int end,int x,int flag)
{
    if(start>end)
        return -1;
    int mid=start+(end-start)/2;
   //cout<<mid<<" "<<start<<" "<<end<<" "<<arr[mid]<<endl;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x && flag==0)
        return bs(arr,start,mid-1,x,flag);
    else if(arr[mid]<x && flag==1)
        return bs(arr,start,mid-1,x,flag);
    else
        return bs(arr,mid+1,end,x,flag);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int part=partition(arr,0,n-1);
        //cout<<part<<endl;
        if(arr[part]==x)
        {
            cout<<part<<endl;
            continue;
        }
      //  cout<<arr[part]<<endl;
        int a=-1;
        a=bs(arr,0,part-1,x,0);
        if(a==-1)
            a=bs(arr,part+1,n-1,x,1);
        if(a==-1)
        {
            cout<<"OOPS! NOT FOUND"<<endl;
            continue;
        }
        cout<<a<<endl;
    }
	//code
	return 0;
}
