#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n;
        vector<int>v(n+1);
        vector<vector<long long> >adj(n+1);
        for(long long i=0;i<n-1;i++)
        {
            long long x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            k=x;
        }
        long long e=1,o=0;
        stack<pair<long long,long long> >s;
        s.push(make_pair(k,0));
        while(!s.empty())
        {
            long long x=s.top().first;
            long long y=s.top().second;
            s.pop();
            if(v[x]!=0)
                continue;
            v[x]++;
            if(y!=0 && y%2==0)
                e++;
            else if(y!=0 && y%2!=0)
                o++;
            for(long long i=0;i<adj[x].size();i++)
            {
                s.push(make_pair(adj[x][i],y+1));
            }
          //  cout<<x<<" "<<y<<endl;
        }
      //  cout<<e<<" "<<o<<endl;
        cout<<(o*(o-1))/2 + (e*(e-1))/2<<endl;
    }
    return 0;
}
