#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int i=0,j;
        while(n--)
        {
         j=0;
            while(arr[i]--)
            {
                if(s[j]=='z')
                {
                    s[j]='a';
                }
                else
                {
                    s[j]=int(s[j])+1;
                }
                j++;
            }
            i++;
        }
        cout<<s<<endl;
    }
	//code
	return 0;
}
