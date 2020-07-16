// program includes traversal through a BST using depth first search
// ....PreOrder InOrder and POstOrder

#include<iostream>
using namespace std;

struct node
{
 char data;
 struct node *left;
 struct node *right;
};


struct node* Insert(struct node *root,char data)
{
    if(root==NULL)
    {
    root=(struct node*)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    }
    else if(data>=root->data)
    root->right=Insert(root->right,data);
    else
    {
        root->left=Insert(root->left,data);
    }
    
 return root;

}

void PreOrder(struct node *root)
{
    if(root==NULL)
    return ;                //base condition
    cout<<root->data;
    PreOrder(root->left);   //traverse through the left subtree
    PreOrder(root->right);  //traverse through the right subtree
}
void InOrder(struct node *root)
{
    if(root==NULL)
    return ;  
    InOrder(root->left);    //traverse left subtree            
    cout<<root->data;                 
    InOrder(root->right);  //traverse through the right subtree
}
void PostOrder(struct node *root)
{
    if(root==NULL)
    return ;                //base condition
    
    PostOrder(root->left);   //traverse through the left subtree
    PostOrder(root->right);  //traverse through the right subtree
    cout<<root->data;
}

int main()
{
 struct node *root=NULL;
 root=Insert(root,'F');
 root=Insert(root,'D');
 root=Insert(root,'J');
 root=Insert(root,'B');
 root=Insert(root,'E');
 root=Insert(root,'G');
 root=Insert(root,'K');

 cout<<"Preorder tree : "<<endl;
 PreOrder(root);
 cout<<endl;
 cout<<"InOrder tree  :"<<endl;
 InOrder(root);
 cout<<endl;
 cout<<"PostOrder tree  :"<<endl;
 PostOrder(root);
 return 0;
}
