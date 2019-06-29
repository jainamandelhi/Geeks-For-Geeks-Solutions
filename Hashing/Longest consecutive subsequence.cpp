int findLongestConseqSubseq(int arr1[], int n)
{
    int arr[100002];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        arr[arr1[i]]++;
    }
    int ans=-1;
    int maxi=0;
    for(int i=0;i<=100001;i++)
    {
        if(arr[i]==1)
        {
            maxi++;
        }
        else
        {
            ans=max(maxi,ans);
            maxi=0;
        }
    }
    ans=max(maxi,ans);
    return ans;
}