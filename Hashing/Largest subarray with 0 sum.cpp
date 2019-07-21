int maxLen(int arr[],int n)
{
    int temp=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            temp+=arr[j];
            if(temp==0)
            {
                maxi=max(maxi,j-i+1);
            }
        }
        temp=0;
    }
    return maxi;
  //Your code here
}