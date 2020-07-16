#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* Insert(struct node *root,int data)
{
 if(root==NULL)
 {
     root=(struct node*)malloc(sizeof(struct node));
     root->data=data;
     root->left=NULL;
     root->right=NULL;
 }
 else if(data<root->data)
 root->left=Insert(root->left,data);
 else
 {
     root->right=Insert(root->right,data);
 }
 return root;
}

struct node* FindMin(struct node *root)
{
while(root->left!=NULL)
{
    root=root->left;
}
return root;

}

struct node* Delete(struct node *root,int data)
{
  if(root==NULL)
  return root;
 else if(data<root->data)
 root->left=Delete(root->left,data);
 else if(data>root->data)
 root->right=Delete(root->right,data);

 //we have found the data to be deleted
 else
 {
     //case 1: node with no child
     if(root->left==NULL && root->right==NULL)
     {
         delete root;
         root=NULL;
     }
     //case 2 : node with a single child
     else if(root->left==NULL)   
     {
         struct node *temp=root;
         root=root->right;
         delete temp;
     }
     else if(root->right==NULL)
     {
         struct node *temp=root;
         root=root->left;
         delete temp;
     }
     //case 3 :node with 2 children
     else
     {
         struct node *temp=FindMin(root->right);
         root->data=temp->data;
         root->right=Delete(root->right,data);
        
     }
     
 }
 

     return root;

}




int main()
{
  struct node *root=NULL;
  root=Insert(root,5);
  root=Insert(root,3);
  root=Insert(root,7);
  root=Insert(root,1);
  root=Insert(root,9);
  root=Insert(root,8);
  root=Insert(root,11);

  Delete(root,3);

}

