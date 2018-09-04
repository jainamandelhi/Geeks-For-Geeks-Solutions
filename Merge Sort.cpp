void merge(int arr[], int l, int m, int r)
{
    int j,k;
    int n1=m-l+1;
    int n2=r-m;
    int larr[n1],rarr[n2];
    for(int i=0;i<n1;i++)
        larr[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        rarr[i]=arr[i+m+1];
    int i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(larr[i]<=rarr[j])
        {
            arr[k]=larr[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=rarr[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=larr[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=rarr[j];
        j++;
        k++;
    }
     // Your code here
}
