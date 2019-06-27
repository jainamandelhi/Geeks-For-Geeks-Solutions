/*This is a function problem.You only need to complete the function given below*/
/*Complete the function(s) below*/
void push(int a)
{
    int x=a;
    if(s.size()>0)
    {
        x=min(x,s.top());
        s.pop();
    }
    s.push(a);
    s.push(x);
     //add code here.
}
bool isFull(int n)
{
    if(s.size()==n+1)
        return 1;
    else
        return 0;
     //add code here.
}
bool isEmpty()
{
    if(s.size()==0)
        return 1;
    else
        return 0;
    //add code here.
}
int pop()
{
        s.pop();
        return 0;
    
    //add code here.
}
int getMin()
{
    
    return s.top();
   //add code here.
}