int height(Node *node)
{
    if(!node)
        return 0;
    return 1+max(height(node->left),height(node->right));
}
int diameter(Node* node)
{
    if(!node)
        return 0;
    int a=height(node->left);
    int b=height(node->right);
    return max(a+b+1,max(diameter(node->left),diameter(node->right)));
   // Your code here
}
