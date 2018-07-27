#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
    {
        int flag=0,n;
        cin>>n;
        map<int,int>m;
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            m[k]++;
        }
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>n/2)
            {
                cout<<it->first<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"NO Majority Element"<<endl;
    }
	return 0;
}
