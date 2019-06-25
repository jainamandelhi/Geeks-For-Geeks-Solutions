using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<double>qmax;
    priority_queue<double,vector<double>,greater<double> >qmin;
    double curr=0;
    while(n--)
    {
        int a;
        cin>>a;
        if(qmax.size() == qmin.size())
        {
            if(a>curr){
                qmin.push(a);
                cout<<qmin.top();
                curr=qmin.top();
            }
            else{
                qmax.push(a);
                cout<<qmax.top();
                curr=qmax.top();
            }
            //continue;
        }
        else if(qmax.size()>qmin.size())
        {
            if(a<curr)
            {
                int b=qmax.top();
                qmax.pop();
                qmin.push(b);
                qmax.push(a);
                b=qmax.top();
                a=qmin.top();
                cout<<(a+b)/2;
                curr=(a+b)/2;
            }
            else
            {
                int b=qmax.top();
                qmin.push(a);
                a=qmin.top();
                cout<<(a+b)/2;
                curr=(a+b)/2;
            }
        }
        else
        {
            if(a>curr)
            {
                int b=qmin.top();
                qmin.pop();
                qmin.push(a);
                qmax.push(b);
                b=qmin.top();
                a=qmax.top();
                cout<<(a+b)/2;
                curr=(a+b)/2;
            }
            else
            {
                qmax.push(a);
                int b=qmin.top();
                a=qmax.top();
                cout<<(a+b)/2;
                curr=(a+b)/2;
            }
        }
        cout<<endl;
    }
}
