void countDistinct(int A[], int k, int n)
{
    map<int,int>m;
    for(int i=0;i<k;i++)
        m[A[i]]++;
    cout<<m.size()<<" ";
    int ans=m.size();
    int i=0;
    k--;
    while(i+k<n)
    {
        if(m[A[i]]==1)
            ans--;
        //cout<<m[i]<<endl;
        m[A[i++]]--;
        m[A[i+k]]++;
        if(m[A[i+k]]==1)
            ans++;
        if(i+k<n)
            cout<<ans<<" ";
    }
    //Your code here
}