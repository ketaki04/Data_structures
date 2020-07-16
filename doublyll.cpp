//Doubly linked list
//implementing reverse linkedlist ,inserting at head at tail,
//and printing the list in revese order


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
}*head;

struct node* Getnewnode(int x)
{
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->next=NULL;
 newnode->prev=NULL;
 return newnode;
}

 void insert_head(int x)
 {
     struct node *newnode=Getnewnode(x);
     if(head==NULL)
     {
         head=newnode;
         return;

     }
     head->prev=newnode;
     newnode->next=head;
     head=newnode;
     
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

 void insert_end(int x)
 {
     struct node *newnode=Getnewnode(x);
     struct node *temp=head;
     struct node *last;
     while(temp!=NULL)
     {
         last=temp;
         temp=temp->next;
     }
     last->next=newnode;
     newnode->prev=last;
     newnode->next=NULL;

}

void reverse_print()
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->prev;
    }


}

int main()
{
  head=NULL;
  insert_head(1);
  insert_head(2);
  insert_head(3);
  print();
  insert_end(5);
  print();
  reverse_print();
  return 0;

}
