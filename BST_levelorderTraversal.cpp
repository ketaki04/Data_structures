/*There re two techniques to traverse the tree 
1]Breadth first search - Level order traversal
2] Depth first search - Preorder,Inorder,Postorder traversal
*/

#include<iostream>
#include<queue>
using namespace std;

struct Node 
{
char data;
struct Node *left;
struct Node *right;

};


struct Node* Insert(struct Node *root,char data)
{
    if(root==NULL)
    {
      root=(struct Node*)malloc(sizeof(struct Node));
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

void LevelOrder(struct Node *root)
{
 if(root==NULL)
 return;
 queue<struct Node*>q;
 q.push(root);
 while(!q.empty())
 {
 struct Node *current=q.front();
 q.pop();
 cout<<current->data<<" ";
 if(current->left!=NULL) q.push(current->left);
 if(current->right!=NULL) q.push(current->right);
 }


}







int main()
{
  struct Node *root=NULL;
  root=Insert(root,'F');
  root=Insert(root,'D');
  root=Insert(root,'J');
  root=Insert(root,'B');
  root=Insert(root,'E');
  root=Insert(root,'G');
  root=Insert(root,'K');
  LevelOrder(root);
}