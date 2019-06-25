using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        k++;
        while(k-->1)
            n>>=1;
        if((n & 1)==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
