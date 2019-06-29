
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int p=0;
cpp_int f(int n)
{
    cpp_int arr[n];
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {
        arr[i]=0;
        for(int j=i-1;j>=0;j--)
        {
            arr[i]+=arr[j]*arr[i-j-1];
        }
    }
    return arr[n-1];
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cpp_int solve=f(n+1);
        cout<<solve<<endl;
    }
	//code
	return 0;
}
