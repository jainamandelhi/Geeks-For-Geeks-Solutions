long long dfs(long long n,long long arr[],long long j,long long dp[][3])
{
    if(j>1 || n<0)
        return 0;
    if(n==0)
        return 1;
    if(dp[n][j]!=-1)
        return dp[n][j];
    dp[n][j]=dfs(n-arr[j],arr,j,dp)+dfs(n,arr,j+1,dp);
    return dp[n][j];
}
long long countWays(int n){
    long long arr[2]={1,2};
    long long dp[n+1][3];
    memset(dp,-1,sizeof(dp));
    return dfs(n,arr,0,dp);
    // your code here
}
