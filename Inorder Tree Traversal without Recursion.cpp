#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node *right;
};
Node* newNode(int data)
{
    Node *p;
    p=new(Node);
    p->data=data;
    p->left=p->right=NULL;
    return p;
}
void inorder(struct Node *root)
{
    stack<Node*>s;
    s.push(root);
    Node *current=root;
    while(!s.empty())
    {
        while(current)
        {
            s.push(current);
            current=current->left;
        }
        current=s.top();
        cout<<current->data<<" ";
        current=current->right;
        s.pop();
    }
}
int main()
{
    struct Node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);

    inorder(root);
    return 0;
}
