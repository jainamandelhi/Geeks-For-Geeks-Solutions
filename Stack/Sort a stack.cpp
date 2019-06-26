void dfs1(stack<int>&s,int a)
{
    if(s.size()==0)
        return;
    int b=s.top();
    s.pop();
    if(s.size() && a<s.top())
        dfs1(s,a);
    else
        s.push(a);
    s.push(b);
}
void dfs(stack<int>&s)
{
    if(s.size()==1)
        return;
    int a=s.top();
    s.pop();
    dfs(s);
    if(a<s.top())
        dfs1(s,a);
    else
        s.push(a);
}
void SortedStack :: sort()
{
    dfs(s);
   //Your code here
}