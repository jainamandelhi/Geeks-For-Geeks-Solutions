int maxLen(int arr[], int n)
{
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int zero=0,one=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j])
                one++;
            else
                zero++;
            if(one==zero)
                maxi=max(j-i+1,maxi);
        }
    }
    return maxi;
//Your code here
}