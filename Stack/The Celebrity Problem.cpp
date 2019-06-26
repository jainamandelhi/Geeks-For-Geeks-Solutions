int getId(int M[MAX][MAX], int n)
{
    stack<int>st;
    for(int i=0;i<n;i++)
        st.push(i);
    int a=-1;
    while(!st.empty())
    {
        a=st.top();
        int b;
        st.pop();
        if(!st.empty())
        {
            b=st.top();
            st.pop();
            if(M[a][b] && M[b][a])
                continue;
            else if(M[a][b])
                st.push(b);
            else
                st.push(a);
        }
    }
    if(a==-1)
        return -1;
    for(int i=0;i<n;i++)
    {
        if(i==a)
            continue;
        if(M[a][i]==1 || M[i][a]==0)
            return -1;
    }
    return a;
    //Your code here
}