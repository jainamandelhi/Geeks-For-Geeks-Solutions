#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        map<int,int>::iterator itr;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            m[a]++;
        }
        for(itr=m.begin();itr!=m.end();itr++)
        {
            arr.push_back(itr->second);
        }
        sort(arr.begin(),arr.end());
        int sum=0,total=0;
        int x;
        cin>>x;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<=x)
                total++;
            else
                break;
        }
        cout<<arr.size()-total<<endl;
    }
	//code
	return 0;
}
