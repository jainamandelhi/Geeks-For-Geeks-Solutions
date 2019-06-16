int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    if(n==0)
        return 0;
    char ch[n];
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
            if(A[i]>A[j] && inc[j]+1>inc[i])
            {
                inc[i]=inc[j]+1;
                //break;
            }
            if(A[i]<A[j])
            {
                dec[i]=max(dec[i],max(dec[j]+1,inc[j]+1));
                //break;
            }
        }
    }
    return max(inc[n-1],dec[n-1]);
}
