//Creating a BST and finding height of the tree.

#include<iostream>
using namespace std;

struct bstnode 
{
    int data;
    struct bstnode *left;
    struct bstnode *right;
};


bstnode* Getnewnode(int data)
{
struct bstnode *newnode=(struct bstnode*)malloc(sizeof(struct bstnode));
newnode->data=data;
newnode->left=NULL;
newnode->right=NULL;
return newnode;

}

bstnode* Insert(struct bstnode *root,int data)
{
    if(root==NULL)
    {
        root=Getnewnode(data);
    }
    else if(data<=root->data)
    {
        root->left=Insert(root->left,data);
    }
    else 
    {
        root->right=Insert(root->right,data);
    }
return root;
int countleft,countright;

}


int FindHeight(struct bstnode *root)
{
  if(root==NULL)
  return -1;
  else
  {
  int lht=FindHeight(root->left);
  int rht=FindHeight(root->right);
  if(lht>rht)
  return (lht+1);
  else return (rht+1);
  }
}


int main()
{
    //countleft=0,countright=0;
    int ht;
    struct bstnode *root=NULL;
    //Creating a BST
    root=Insert(root,20);
    root=Insert(root,15);
    root=Insert(root,25);
    root=Insert(root,10);
    root=Insert(root,30);
    root=Insert(root,6);
    root=Insert(root,12);
    ht=FindHeight(root);
    cout<<"height of the tree is"<<ht<<endl;
    
     return 0;
}