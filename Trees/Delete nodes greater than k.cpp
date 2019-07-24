Node* deleteNode(Node* root, int key)
{
    if(!root)
        return NULL;
    if(root->data>=key)
        return deleteNode(root->left,key);
    else
        root->right=deleteNode(root->right,key);
    return root;
    //Your code here
}
