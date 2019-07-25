void connect(Node *root)
{
    vector<vector<Node*> >v;
    vector<Node*>v1;
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
            v1.push_back(temp);
        }
        else
        {
            maxi=se;
            v.push_back(v1);
            v1=vector<Node*>();
            v1.push_back(temp);
        }
        if(temp->left)
            q.push(make_pair(temp->left,se+1));
        if(temp->right)
            q.push(make_pair(temp->right,se+1));
    }
    if(v1.size()>0)
        v.push_back(v1);
    for(int i=0;i<v.size();i++)
    {
        int j;
        for(j=0;j<v[i].size()-1;j++)
        {
            v[i][j]->nextRight=v[i][j+1];
        }
        v[i][j]->nextRight=NULL;
    }
   // Your Code Here
}
