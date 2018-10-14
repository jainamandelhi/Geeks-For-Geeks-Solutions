#include<bits/stdc++.h>
using namespace std;
void p(int n,int m,bool flag)
{
    cout<<n<<" ";
    if(n==m && flag==false)
        return;
    else if(n<=0)
        p(n+5,m,false);
    else if(n>0 && flag==false)
        p(n+5,m,false);
    else
        p(n-5,m,true);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        p(n,n,true);
        cout<<endl;
    }
	//code
	return 0;
}
