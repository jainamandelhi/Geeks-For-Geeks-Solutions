#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()!=s2.size())
        {
            cout<<0<<endl;
            continue;
        }
        string temp=s1+s1;
        if(temp.find(s2)!=string ::npos)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
	//code
	return 0;
}
