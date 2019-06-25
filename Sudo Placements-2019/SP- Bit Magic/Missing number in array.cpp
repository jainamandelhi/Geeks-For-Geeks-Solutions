using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=0;
        for(int i=1;i<=n;i++)
            a=a^i;
        int arr[n];
        for(int i=0;i<n-1;i++)
        {
            int b;
            cin>>b;
            a=a^b;
        }
        cout<<a<<endl;
    }
}
