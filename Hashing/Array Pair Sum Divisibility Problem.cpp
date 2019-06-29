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
        ll k;
        cin>>k;
        if(n%2==1)
        {
            cout<<"False"<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
            arr[i]%=k;
        ll flag=0;
        sort(arr,arr+n);
        ll i=0,j=n-1;
        while(i<=j)
        {
            if((arr[i]+arr[j])%k!=0)
            {
                cout<<"False"<<endl;
                flag=1;
                break;
            }
            i++;
            j--;
        }
        if(flag==0)
            cout<<"True"<<endl;
    }
}
