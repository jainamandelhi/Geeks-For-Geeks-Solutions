using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=1;
        while((n & 1)!=1)
        {
            ans++;
            n>>=1;
            if(n==0)
            {
                ans=0;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
