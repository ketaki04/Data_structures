//reverse the linked list using itteartive and recursion method


#include<iostream>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*head,*store;

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

 if(head==NULL)
 {
     cout<<"list id empty";
     exit(0);
 }

 while(temp!=NULL)
 {
     cout<<temp->data;
     temp=temp->next;
 }
cout<<endl;
}

//Function to reveerse the linked list using the loop ie itterative method

void reverse_itterative()
{
    struct node *prev,*current,*next;
    current=head;
    prev=NULL;
    
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

    head=prev;
}

//Function to reverse list using recurrsion
void reverse_recurrsion(struct node *p)
{

 if(p->next==NULL)
 {
     head=p;
     return;

 }
 reverse_recurrsion(p->next);
 struct node *q=p->next;
 q->next=p;
 p->next=NULL;

}




int main()
{
 int x,n;
 cout<<"Enter the number ofnodes";
 cin>>n;
 createlist(n);
 
 reverse_recurrsion(head);
  printlist();
 reverse_itterative();
 cout<<"reverse itteratively";
  printlist();
 return 0;
}