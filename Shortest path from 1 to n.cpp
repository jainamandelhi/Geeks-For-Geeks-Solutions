#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        int n;
        cin>>n;
        while(n)
        {
            if(n%3)
                n--;
            else
                n/=3;
            ans++;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}
