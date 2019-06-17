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
        ll n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=2;i<n;i++)
            arr[i]+=min(arr[i-1],arr[i-2]);
        cout<<min(arr[n-1],arr[n-2])<<endl;
    }
}
