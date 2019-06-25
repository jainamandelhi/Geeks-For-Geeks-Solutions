using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(log2(n)==int(log2(n)))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}
