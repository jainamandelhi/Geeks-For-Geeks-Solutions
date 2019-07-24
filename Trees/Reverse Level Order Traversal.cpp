void reversePrint(Node *root)
{
    vector<vector<int> >v;
    vector<int>v1;
    queue<pair<Node*, int> >q;
    q.push(make_pair(root,0));
    int maxi=0;
    while(!q.empty())
    {
        Node* temp=q.front().first;
        int se=q.front().second;
        q.pop();
        if(se==maxi)
        {
            v1.push_back(temp->data);
        }
        else
        {
            maxi=se;
            v.push_back(v1);
            v1=vector<int>();
            v1.push_back(temp->data);
        }
        if(temp->left)
            q.push(make_pair(temp->left,se+1));
        if(temp->right)
            q.push(make_pair(temp->right,se+1));
    }
    if(v1.size()>0)
        v.push_back(v1);
    for(int i=v.size()-1;i>=0;i--)
    {
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
    }
    //Your code here
}