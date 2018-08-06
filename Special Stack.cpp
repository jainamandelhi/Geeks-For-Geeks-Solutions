{
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function(s) below*/
void push(int a)
{
    s.push(a);
     //add code here.
}
bool isFull(int n)
{
    return s.size()==n;
     //add code here.
}
bool isEmpty()
{
    return s.size()==0;
    //add code here.
}
int pop()
{
    int a=s.top();
    s.pop();
    return a;
    //add code here.
}
int getMin()
{
    int min=10000;
    while(!s.empty())
    {
        int a=s.top();
        s.pop();
        if(a<min)
        min=a;
    }
    return min;
   //add code here.
}
