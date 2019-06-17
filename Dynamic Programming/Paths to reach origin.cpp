#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        n++;
        m++;
        int arr[n][m];
        for(ll j=0;j<m;j++)
            arr[n-1][j]=1;
        for(ll i=n-2;i>=0;i--)
        {
            for(ll j=0;j<m;j++)
            {
                if(j-1<0)
                    arr[i][j]=arr[i+1][j];
                else
                    arr[i][j]=arr[i+1][j]+arr[i][j-1];
            }
        }
        cout<<arr[0][m-1]<<endl;
    }
}
