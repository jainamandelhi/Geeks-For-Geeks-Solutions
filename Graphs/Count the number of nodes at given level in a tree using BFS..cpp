#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> >adj(n);
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1)
            break;
        adj[a].pb(b);
    }
    vector<int>arr;
    queue<int>q;
    q.push(0);
    q.push(-1);
    int total=0;
    while(!q.empty())
    {
       // cout<<total<<endl;
        int s=q.front();
        q.pop();
        if(s==-1)
        {
            arr.pb(total);
            total=0;
            q.push(-1);
            if(q.front()==-1)
                break;
            continue;
        }
        total++;
        for(int i=0;i<adj[s].size();i++)
            q.push(adj[s][i]);
    }
    cout<<arr[m];
}
