//Creating a BST and finding the minimum and maximum element.

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

}

//finding the minimum element in BST

int FindMin(struct bstnode *current)
{
 if(current==NULL)
 {
 cout<<"No element in tree";
 return -1;
 }
 else if(current->left==NULL)
 {
     return current->data;
 }
 return FindMin(current->left);

}

//finding maximum element in BST

int FindMax(struct bstnode *current)
{
 if(current==NULL)
 {
 cout<<"No element in tree";
 return -1;
 }
 else if(current->right==NULL)
 {
     return current->data;
 }
 return FindMax(current->right);

}


int main()
{
    int min,max;
    struct bstnode *root=NULL;
    //Creating a BST
    root=Insert(root,20);
    root=Insert(root,15);
    root=Insert(root,25);
    root=Insert(root,10);
    root=Insert(root,30);
    root=Insert(root,6);
    root=Insert(root,12);
    min=FindMin(root);
    cout<<"minimum element in tree is:"<<min<<endl;
    max=FindMax(root);
     cout<<"maximum element in tree is:"<<max<<endl;
     return 0;
}