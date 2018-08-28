int countLeaves(Node* root)
{
    if(!root)
        return 0;
    queue<Node*>q;
    q.push(root);
    int count1=0;
    while(!q.empty())
    {
        Node *current=q.front();
        if(!current->left && !current->right)
            count1++;
        if(current->left)
            q.push(current->left);
        if(current->right)
            q.push(current->right);
        q.pop();
    }
    return count1;
  // Your code here
}
