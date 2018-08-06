{
#include<bits/stdc++.h>
using namespace std;
class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of the class is
class StackQueue{
private:
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
     s1.push(x);
        // Your Code
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s2.empty() && s1.empty())
    return -1;
    if(s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int a=s2.top();
        s2.pop();
        return a;
    }
    int a=s2.top();
        s2.pop();
        return a;
        // Your Code
}
