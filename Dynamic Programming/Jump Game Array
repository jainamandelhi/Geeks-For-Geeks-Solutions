int Solution::canJump(vector<int> &A) {
    int n=A.size();
    int l[n];
    if(n==1)
        return 1;
    int ans=A[0];
    for(int i=1;i<n;i++)
    {
        if(ans>=i)
            ans=max(ans,A[i]+i);
    }
    if(ans>=n-1)
        return 1;
    return 0;
}
