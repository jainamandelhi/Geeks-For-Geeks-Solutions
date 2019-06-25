using namespace std;
void heapify(int arr[],int i,int n)
{
    int l=2*i+1;
    int r=2*i+2;
    int highest=i;
    if(l<n && arr[l]>arr[highest])
        highest=l;
    if(r<n && arr[r]>arr[highest])
        highest=r;
    swap(arr[highest],arr[i]);
    if(highest!=i)
        heapify(arr,highest,n);
}
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,i,n);
    for(int i=n-1;i>=0 && k>0;i--)
    {
        cout<<arr[0]<<" ";
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
        k--;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
