#include<iostream>
using namespace std;

struct node
{
int data;
struct node *next;

}*head;



void createlist(int n)
{
 int x;
 struct node *newnode,*temp;
 head=(struct node*)malloc(sizeof(struct node));
 cout<<"enter the data of node 1"<<endl;
 cin>>x;
 head->data=x;
 head->next=NULL;
 temp=head;
  for(int i=2;i<=n;i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter the data of node"<<i<<endl;
    cin>>x;
    newnode->data=x;
    newnode->next-=NULL;

    temp->next=newnode;
    temp=temp->next;
  }

}

void printlist()
{
  struct node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data;
    temp=temp->next;
  }
}

void insert_begin()
{
int x;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
cout<<"enter the data of new node";
cin>>x;
newnode->data=x;
newnode->next=head;
head=newnode;
}

void insert_end()
{
int x;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
cout<<"enter the data of new node";
cin>>x;
newnode->data=x;
 struct node *temp=head;
 while(temp->next!=NULL)
 {
   temp=temp->next;
 }
 temp->next=newnode;
 newnode->next=NULL;
}

void insert_pos(int p)
{
  int x;
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  cout<<"enter the data of new node st pos"<<p<<endl;
  cin>>x;
  newnode->data=x;
  struct node *temp=head;
  for(int i=1;i<p-1;i++)
  {
   temp=temp->next;

  }
newnode->next=temp->next;
temp->next=newnode;

  }

int main()
{
 int n,p;
 cout<<"enter the number of nodes";
 cin>>n;
 createlist(n);
 printlist();
 insert_begin();
 printlist();
 insert_end();
 printlist();
 cout<<"enter the position of the node";
 cin>>p;
insert_pos(p);
printlist();
 return 0;

}