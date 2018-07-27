#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int T=0;T<t;T++)
    {
        int v,e;
        cin>>v>>e;
        vector<int>arr[v];
        for(int i=0;i<e;i++)
        {
            int j,k;
            cin>>j>>k;
            arr[j].push_back(k);
            arr[k].push_back(j);
        }
        for(int i=0;i<v;i++)
        {
            cout<<i;
            for(int j=0;j<arr[i].size();j++)
            {
                cout<<"-> "<<arr[i][j];
            }
            cout<<endl;
        }
    }

	//code
	return 0;
}
