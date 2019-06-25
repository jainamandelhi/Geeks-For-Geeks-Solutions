using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=1;
        while((n&1) == (m&1))
        {
            n>>=1;
            m>>=1;
            ans++;
        }
        cout<<ans<<endl;
    }
}
