#include<iostream>
using namespace std;

int main()
{
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int sa=0,sb=0,sc=0,flag=1,pair=0,picks=0;
	while(flag)
	{
		if(a!=0)
		{
			a--;
			sa++;
			picks++;
			if(sa==2)
			{
				pair++;
				sa=0;
			}
			if(pair==n)
			{
				flag=0;
				continue;
			}
		}
		if(b!=0)
		{
			b--;
			sb++;
			picks++;
			if(sb==2)
			{
				pair++;
				sb=0;
			}
		if(pair==n)
			{
				flag=0;
				continue;
			}

		}
		if(c!=0)
		{
			c--;
			sc++;
			picks++;
			if(sc==2)
			{
				pair++;
				sc=0;
			}
			if(pair==n)
			{
				flag=0;
				continue;
			}
		}
	}
	cout<<picks;
	return 0;
}
