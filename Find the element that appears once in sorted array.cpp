#include<bits/stdc++.h>

using namespace std;
void search(vector<int>arr,int low,int high)
{
    if(low>high)
        return;
    if(low==high){
        cout<<arr[low]<<endl;
        return;
    }
    else 
    {
        int mid=(low+high)/2;
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid-1])
                return search(arr,low,mid-2);
            else
                return search(arr,mid,high);
        }
        else
        {
            if(arr[mid]==arr[mid+1])
                return search(arr,low,mid-1);
            else
                return search(arr,mid+1,high);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
	    for(int i=0;i<n;i++)
            cin>>arr[i];
        search(arr,0,n-1);
    }
	return 0;
}
