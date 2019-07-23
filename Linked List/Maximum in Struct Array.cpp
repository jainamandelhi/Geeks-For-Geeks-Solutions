int findMax(Height arr[], int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int temp=(arr[i].feet)*12+arr[i].inches;
        maxi=max(maxi,temp);
    }
    return maxi;
    // Code here
}