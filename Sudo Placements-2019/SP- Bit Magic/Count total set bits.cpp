using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans[10001];
    ans[0]=0;
    for(int i=1;i<=1001;i++)
    {
        int temp=0;
        int j=i;
        while(j)
        {
            if((j&1)==1)
                temp++;
            j>>=1;
        }
        ans[i]=temp+ans[i-1];
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
