#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	long long N;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    long long Temp;
	    Temp=(N/2+N/3+N/5+N/7)-(N/6+N/10+N/14+N/15+N/21+N/35)+(N/30+N/42+N/105+N/70)-(N/210);
	    long long Ans=N-Temp;
	    cout << Ans << endl;
	}
	return 0;
}
