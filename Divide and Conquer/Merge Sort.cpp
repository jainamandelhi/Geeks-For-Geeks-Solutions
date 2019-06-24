/*This is a function problem.You only need to complete the function given below*/
/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
        arr1[i]=arr[i+l];
    for(int i=0;i<n2;i++)
        arr2[i]=arr[i+m+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else if(arr1[i]==arr2[j])
        {
            arr[k]=arr1[i];
            j++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
     // Your code here
}