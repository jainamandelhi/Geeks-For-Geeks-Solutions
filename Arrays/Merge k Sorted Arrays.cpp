int *mergeKArrays(int arr[][N], int k)
{
    priority_queue<int,vector<int>,greater<int> >q;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
            q.push(arr[i][j]);
    }
    int *ans=new int[k*k];
    for(int i=0;i<k*k;i++)
    {
        ans[i]=q.top();
        q.pop();
    }
    return ans;
//code here
}