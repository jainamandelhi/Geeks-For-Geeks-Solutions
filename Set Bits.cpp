#include<bits/stdc++.h>
using namespace std;
int get(int n)
{
    if(n==0)
        return 0;
    return ((n&1) + get(n>>1));
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=get(n);
        cout<<ans<<endl;
    }
	//code
	return 0;
}
