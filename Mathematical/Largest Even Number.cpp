#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        vector<int>v(10,0);
       // vector<int>s1;
        for(int i=0;i<s.size();i++)
            v[s[i]-'0']++;
            int mini=9;
        for(int i=9;i>=0;i--)
        {
            if(v[i]>0 && i%2==0 && i<mini)
                mini=i;
            while(v[i]>0)
            {
                char c=i+'0';
                s1.push_back(c);
                v[i]--;
            }
        }
        char c=mini+'0';
        if(s1[s1.size()-1]==c)
            cout<<s1<<endl;
        else
        {
            s1.push_back(c);
            int k=s1.find(c);
            s1.erase(k,1);
            cout<<s1<<endl;
        }
    }
}
