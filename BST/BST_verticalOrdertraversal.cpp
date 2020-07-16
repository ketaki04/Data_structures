// C++ program for printing vertical order of a given binary tree 
#include <iostream> 
#include <vector> 
#include <map> 
using namespace std; 

struct node
{
    int key;
    struct node *left,*right;
};

struct node* newNode(int key)
{
 struct node *root=(struct node*)malloc(sizeof(struct node));
 root->key=key;
 root->left=NULL;
 root->right=NULL;
 return root;

}

void getVerticalOrder(struct node *root,int hd,map<int,vector<int>> &m)
{
if(root==NULL)
return;
m[hd].push_back(root->key);
getVerticalOrder(root->left,hd-1,m);   //for leftsubtree -1 from paret
getVerticalOrder(root->right,hd+1,m);  //for right subtree +1 from the parent

}
void printVerticalOrder(struct node *root)
{
    map<int,vector<int>> m;
    int hd=0;
    getVerticalOrder(root,hd,m);


    map<int,vector<int>> ::iterator it;
    for(it=m.begin();it!=m.end();it++)    //here the forloo[ is for map]
    {
      for(int i=0;i<it->second.size();++i)   //it->second means the second element of map.ie the node data and loop for only the second value part
      {
          cout<<it->second[i]<<" ";
      }


    }
 }

// Driver program to test above functions 
int main() 
{ 
	struct node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->left = newNode(6); 
	root->right->right = newNode(7); 
	root->right->left->right = newNode(8); 
	root->right->right->right = newNode(9); 
	cout << "Vertical order traversal is n"; 
	printVerticalOrder(root); 
	return 0; 
} 
