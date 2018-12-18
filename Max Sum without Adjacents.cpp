#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int maxi;
        if(n>1){
            maxi=max(arr[0],arr[1]);
            arr[1]=maxi;
        }
        else
            maxi=arr[0];
        for(int i=2;i<n;i++)
        {
            arr[i]=arr[i]+arr[i-2];
            maxi=max(arr[i],arr[i-1]);
            arr[i]=maxi;
        }
        cout<<maxi<<endl;
    }
}
