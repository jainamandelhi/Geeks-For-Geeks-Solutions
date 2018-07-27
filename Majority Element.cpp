#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,majelement;
        cin>>n;
        vector<int>arr(n);
        for(int j=0;j<n;j++)
            cin>>arr[j];
        int count =1;
        majelement=arr[0];
        for(int j=0;j<n-1;j++)
        {
            if(majelement==arr[j+1])
            {
                count++;
            }
            else
                count--;
            if(count==0)
            {
                majelement=arr[j+1];
                count=1;
            }
        }
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==majelement)
                count++;
        }
        if(count>n/2)
            cout<<majelement<<endl;
        else
            cout<<"NO Majority Element"<<endl;
    }
	//code
	return 0;
}
