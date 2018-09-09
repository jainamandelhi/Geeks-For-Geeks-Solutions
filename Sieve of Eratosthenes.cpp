#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool *prime=new bool[n+1];
        for(int i=0;i<=n;i++)
            prime[i]=true;
        for(int i=2;i<=n;i++)
        {
            if(prime[i])
            {
                for(int j=i*2;j<=n;j+=i)
                    prime[j]=false;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(prime[i])
                cout<<i<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
