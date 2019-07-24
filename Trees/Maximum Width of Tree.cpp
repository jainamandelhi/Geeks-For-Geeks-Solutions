int getMaxWidth(Node* root)
{
    vector<int>v(200);
    queue<pair<Node*,int> >q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        Node *temp=q.front().first;
        int se=q.front().second;
        q.pop();
        v[se]++;
        if(temp->left)
            q.push(make_pair(temp->left,se+1));
        if(temp->right)
            q.push(make_pair(temp->right,se+1));
    }
    sort(v.rbegin(),v.rend());
    return v[0];

   // Your code here
}