#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n,count=0;
        cin>>n;
        map<string,int>m;
        map<string,int>::iterator itr;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            m[s]++;
        }
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second==2)
                count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
