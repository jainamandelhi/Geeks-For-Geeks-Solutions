int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    if(n==0)
        return 0;
    int inc[n];
    int dec[n];
    for(int i=0;i<n;i++)
    {
        inc[i]=1;
        dec[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(A[i]>A[j])
            {
                inc[i]=max(inc[j]+1,inc[i]);
            }
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                dec[i]=max(dec[j]+1,dec[i]);
            }
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
        maxi=max(maxi,inc[i]+dec[i]-1);
    return maxi;
}
