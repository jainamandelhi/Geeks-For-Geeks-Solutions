#include <bits/stdc++.h>
using namespace std;
void f(vector<string>s,int i,int j,int** v,int n,int m)
{
   queue<pair<int,int> >q;
   q.push(make_pair(i,j));
   while(!q.empty())
   {
       int f=q.front().first;
       int l=q.front().second;
       v[f][l]=1;
       if(f+1<n && s[f+1][l]=='X' && v[f+1][l]==0)
       {
           q.push(make_pair(f+1,l));
           v[f+1][l]=1;
       }
       if(l+1<m && s[f][l+1]=='X' && v[f][l+1]==0)
       {
           q.push(make_pair(f,l+1));
           v[f][l+1]=1;
       }
       if(f-1>=0 && s[f-1][l]=='X' && v[f-1][l]==0)
       {
           q.push(make_pair(f-1,l));
           v[f-1][l]=1;
       }
       if(l-1>=0 && s[f][l-1]=='X' && v[f][l-1]==0)
       {
           q.push(make_pair(f,l-1));
           v[f][l-1]=1;
       }
       q.pop();
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        int count1=0;
        cin>>n>>m;
        vector<string>s;
        int **v=new int*[n];
        for(int i=0;i<n;i++)
            v[i]=new int[m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                v[i][j]=0;
        for(int i=0;i<n;i++)
        {
            string s1;
            cin>>s1;
            s.push_back(s1);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0 && s[i][j]=='X')
                {
                    f(s,i,j,v,n,m);
                    count1++;
                }
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}
