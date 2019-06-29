#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
  struct node* node =
      (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
int isSumProperty(node *root)
{
    int l=0,r=0;
    if(!root || (!root->left && !root->right))
    {
        return 1;
    }
    if(root->left)
        l=root->left->data;
    if(root->right)
        r=root->right->data;
    if(root->data!=l+r)
        return 0;
    else
        return(isSumProperty(root->left) & isSumProperty(root->right));

    //if(!root->left && root->right)
    //{
      //  if(root->right->data==root->data)
        //    return 1;
       // else
         //   return 0;
    //}
    //if(root->left && !root->right)
    //{
      //  if(root->left->data==root->data)
        //    return 1;
        //else
          //  return 0;
   // }
    //if(root->left && root->right)
    //{
      //  /if(!(isSumProperty(root->left)&isSumProperty(root->right)))
        //    return 0;
        //else
        //{
          //  if(root->left->data + root->right->data == root->data)
            //    return 1;
          //  else
         //       return 0;
        //}
    //}

}
int main()
{
  struct node *root  = newNode(10);
  root->left         = newNode(8);
  root->right        = newNode(2);
  root->left->left   = newNode(3);
  root->left->right  = newNode(5);
  root->right->right = newNode(2);
  if(isSumProperty(root))
   cout<<"The given tree satisfies the children sum property ";
  else
    cout<<"The given tree does not satisfy the children sum property ";

  //getchar();
  return 0;
}
