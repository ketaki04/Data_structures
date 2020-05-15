//delete the node at the begining,at ned and at particular position

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

  void print()
  {
   struct node *temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data;
       temp=temp->next;

   }
   cout<<endl;

  }

  void delete_begin()
  {
    struct node *temp=head;
    head=temp->next;
    free(temp);
  }
  void delete_end()
  {
    struct node *temp=head;
    struct node *prev;
    while(temp->next!=NULL)
    {   
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    
  }

  void delete_pos(int p)
  {
    struct node *temp=head;
    struct node *prev;
    for(int i=1;i<p;i++)
    {   
        prev=temp;
        temp=temp->next;

    }
    prev->next=temp->next;
    free(temp);

  }

int main()
{
    int n,p;
    cout<<"Enter the number of nodes";
    cin>>n;
    createlist(n);
    print();
    delete_begin();
    print();
    delete_end();
    print();
    cout<<"enter the position of node to be deleted";
    cin>>p;
   delete_pos(p);
    print();

    return 0;
}