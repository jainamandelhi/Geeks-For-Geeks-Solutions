using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        stack<int>s;
        while(n)
        {
            s.push(n%2);
            n/=2;
        }
        int m=14-s.size();
        for(int i=0;i<m;i++)
            cout<<0;
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
}
