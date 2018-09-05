#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int total=0;
        vector<int>arr(n);
        vector<int>hashmap(10005,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            hashmap[arr[i]]++;
        }
        int k;
        cin>>k;
        for(int i=0;i<n;i++)
        {
           // cout<<hashmap[arr[i]]<<" ";
            if(k==0 && hashmap[arr[i]]>1)
            {
                total++;
                hashmap[arr[i]]-=2;
            }
            if(k!=0 && hashmap[arr[i]]>0 && arr[i]+k<10005 && hashmap[arr[i]]==hashmap[arr[i]+k])
            {
                total++;
            }
            if(k!=0 && hashmap[arr[i]]>0 && arr[i]-k>=0 && hashmap[arr[i]]==hashmap[arr[i]-k])
            {
                total++;
            }
        }
        if(total%2!=0)
            cout<<total<<endl;
        else
            cout<<total/2<<endl;
    }
	//code
	return 0;
}
