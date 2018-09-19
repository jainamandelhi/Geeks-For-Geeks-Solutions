#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>s;
        vector<int>e;
        int flag=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(i<n-1 && arr[i]<arr[i+1] && flag==0)
            {
                flag=1;
                s.push_back(i);
            }
            if(i<n-1 && flag==1 && arr[i]>arr[i+1])
            {
                flag=0;
                e.push_back(i);
            }
        }
        if(flag==1)
            e.push_back(n-1);
        for(int i=0;i<e.size();i++)
            cout<<'('<<s[i]<<" "<<e[i]<<") ";
        if(e.size()==0)
            cout<<"No Profit";
        cout<<endl;
    }
	//code
	return 0;
}
