//Implementing a Binary Search tree using linked list approach of forming dynamic nodes
//Searching a  element in the BST.

#include<iostream>
using namespace std;

struct BSTnode {
int data;
struct BSTnode *left;
struct BSTnode *right;
};
 

 BSTnode* GetnewNode(int data)
 {
  struct BSTnode *newnode=(struct BSTnode*)malloc(sizeof(struct BSTnode));
   newnode->data=data;
   newnode->left=NULL;
   newnode->right=NULL;
   return newnode;
 }

 BSTnode* Insert(struct BSTnode *root,int data)
 {
   if(root==NULL)
   {
       root=GetnewNode(data);
   }
   else if(data<= root->data)
   {
       root->left=Insert(root->left,data);
   }
   else
   {
       root->right=Insert(root->right,data);
   }
   return root;
 }

 bool Search(struct BSTnode* root,int data)
 {
   if(root==NULL)
   return false;
   else if(data==root->data)
   {
       return true;
   }
   else if(data<=root->data)
   {
       return Search(root->left,data);
   }
   else 
   {
       return Search(root->right,data);
   }

 }

int main()
{
    struct BSTnode *root=NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,22);
    root=Insert(root,18);
    root=Insert(root,2);
    int n;
    cout<<"enter the number to search in BST";
    cin>>n;
    if(Search(root,n))cout<<"data found";
    else
    {
        cout<<"data not found";
    }
  
    return 0;

}