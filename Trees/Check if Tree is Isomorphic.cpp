bool isIsomorphic(Node *root1,Node *root2)
{
    if(!root1 && !root2)
        return 1;
    if(!root1 || !root2)
        return 0;
    bool b= root1->data == root2->data && isIsomorphic(root1->right,root2->left) && isIsomorphic(root1->left,root2->right);
    bool a= root1->data == root2->data && isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right);
    return a || b;
//add code here.
}