/*This is a function problem.You only need to complete the function given below*/
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{
    if(s.size()==0)
        return -1;
    return s.top();
   //Your code here
}
/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.size()<2)
        return -1;
    s.pop();
    int a=s.top();
    s.pop();
    return a;
    
   //Your code here
}
/*push element x into the stack*/
void _stack::push(int x)
{
    int a=x;
    if(s.size()>0)
        a=min(x,s.top());
    s.push(x);
    s.push(a);
   //Your code here
}
