void verticalOrder(Node *root)
{
    map<int,vector<int> >m;
    map<int,vector<int> > :: iterator itr;
    queue<pair<Node*,int> >q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        Node *temp=q.front().first;
        int se=q.front().second;
        q.pop();
        m[se].push_back(temp->data);
        if(temp->left)
            q.push(make_pair(temp->left,se-1));
        if(temp->right)
            q.push(make_pair(temp->right,se+1));
    }
    for(itr=m.begin();itr!=m.end();itr++)
    {
        for(int i=0;i<itr->second.size();i++)
            cout<<itr->second[i]<<" ";
    }
    //Your code here
}