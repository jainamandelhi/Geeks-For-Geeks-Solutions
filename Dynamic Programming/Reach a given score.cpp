using namespace std;
int dfs(int sum,vector<vector<int> >&v,int n, int *arr,int index)
{
    if(sum==n)
        return 1;
    if(sum>n || index>2)
        return 0;
    if(v[sum][index]!=-1)
       return v[sum][index];
    int a=dfs(sum+arr[index],v,n,arr,index) + dfs(sum,v,n,arr,index+1);
    v[sum][index]=a;
    return v[sum][index];
return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[3]={3,5,10};
        vector<vector<int> >v(n+1,vector<int>(3,-1));
        cout<<dfs(0,v,n,arr,0)<<endl;

    }
}
