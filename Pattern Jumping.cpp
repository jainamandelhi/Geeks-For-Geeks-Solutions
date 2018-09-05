#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(log2(n)==int(log2(n)))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }
	//code
	return 0;
}
