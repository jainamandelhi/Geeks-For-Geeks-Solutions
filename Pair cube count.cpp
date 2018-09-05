#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        int i=0;
        while(i*i*i<=n)
        {
            arr.push_back(i);
            i++;
        }
       // for( i=0;i<arr.size();i++)
    //    cout<<arr[i]<<" ";
        i=0;
        int j=arr.size()-1;
        int total=0;
        while(i<=j)
        {
            int a=arr[i]*arr[i]*arr[i];
            int b=arr[j]*arr[j]*arr[j];
            //cout<<i<<" "<<j<<" "<<total<<endl;
            if(a+b>n)
                j--;
            else if(a+b<n)
                i++;
            else if(a+b==n)
            {
                if(a!=0 && b!=0 && i!=j)
                    total++;
                total++;
                i++;
                j--;
            }
        }
       cout<<total<<endl;
    }
	//code
	return 0;
}
