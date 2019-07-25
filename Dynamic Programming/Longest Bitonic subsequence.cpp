#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int merge(ll arr[],ll l,ll mid,ll r)
{
    ll n1=mid-l+1;
    ll n2=r-mid;
    ll inv=0;
    ll arr1[n1];
    ll arr2[n2];
    for(ll i=0;i<n1;i++)
        arr1[i]=arr[l+i];
    for(ll j=0;j<n2;j++)
        arr2[j]=arr[mid+j+1];
    ll i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            arr[k++]=arr2[j++];
            inv+=n1=i;
        }
        else
        {
            arr[k++]=arr1[i++];
        }
    }
    while(i<n1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr[k++]=arr2[j++];
    }
    return inv;
}
int mergesort(ll arr[],ll i,ll j)
{
    ll inv=0;
    if(i>=j)
        return inv;
    ll mid=i+(j-i)/2;
    inv+=mergesort(arr,i,mid);
    inv+=mergesort(arr,mid+1,j);
    inv+=merge(arr,i,mid,j);
    return inv;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll ans1[n],ans2[n];
        for(ll i=0;i<n;i++)
        {
            ans1[i]=1;
            ans2[i]=1;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(arr[i]>arr[j])
                {
                    ans1[i]=max(ans1[i],ans1[j]+1);
                }
            }
        }
        for(ll i=n-1;i>=0;i--)
        {
            for(ll j=n-1;j>i;j--)
            {
                if(arr[i]>arr[j])
                {
                    ans2[i]=max(ans2[i],ans2[j]+1);
                }
            }
        }
        ll maxi=0;
        for(ll i=0;i<n;i++)
        {
            maxi=max(maxi,ans1[i]+ans2[i]-1);
        }
        cout<<maxi<<endl;
    }
}
