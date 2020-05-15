//code1
//creating linked list, traversing through it and printing all the elements of linked list



#include<iostream>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*head;

void createlist(int n)
{
  struct node *temp,*newnode;
  int x;

  head=(struct node*)malloc(sizeof(struct node));
  if(head==NULL)
  {
      cout<<"Enable to allocate memory";
      exit(0);

  }

  cout<<"enter the data of node 1";
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
    newnode->next=NULL;

    temp->next=newnode;
    temp=temp->next;
}
  
}

void printlist()
{
 struct node *temp=head;

 if(head=NULL)
 {
     cout<<"list id empty";
     exit(0);
 }

 while(temp!=NULL)
 {
     cout<<temp->data;
     temp=temp->next;
 }


}

int main()
{
 int x,n;
 cout<<"Enter the number ofnodes";
 cin>>n;
 createlist(n);
 printlist();
 return 0;
}