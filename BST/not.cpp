#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node {
   public:
      int data;
   node* left;
   node* right;
   node(int data) {
      this->data = data;
      this->left = NULL;
      this->right = NULL;
   }
};
bool isbstutil(node *root,int min,int max)
{
   if(root==NULL)return true;
  if(root->data<min ||root->data >max)
  return false;
  if (isbstutil(root->left,min,root->data)&&isbstutil(root->right,root->data,max))
  return true;
  else 
  return false;

}
bool isbst(node *root)
{
   return isbstutil(root,INT_MIN,INT_MAX);
}

int main() {
   node *root = new node(8);
   root->left = new node(3);
   root->right = new node(10);
   root->left->left = new node(1);
   root->left->right = new node(6);
   if(isbst(root))
      cout<<"The given tree is a BST";
   else
      cout<<"The given tree is Not a BST";
   return 0;
}