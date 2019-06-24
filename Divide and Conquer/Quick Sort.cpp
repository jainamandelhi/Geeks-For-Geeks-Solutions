/*This is a function problem.You only need to complete the function given below*/
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,    low  --> Starting index,   high  --> Ending index
void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}*/
/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int partition (int arr[], int low, int high)
{
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<arr[high])
        {
            i++;
            swap(arr[j],arr[i]);
            continue;
        }
    }
    i++;
    swap(arr[i],arr[high]);
    return i;
   // Your code here
}