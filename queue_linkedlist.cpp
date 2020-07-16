//Queue implementation using linked list
//functions created Enqueue Dequeue and Print


#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*rear,*front;

void Enqueue(int x)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=NULL;
  if(front==NULL && rear==NULL)
  {
      front=temp;
      rear=temp;
  }
  
    rear->next=temp;
    rear=temp;
    rear->next=NULL;


}
void Dequeue()
{
    struct node *temp=front;
  if(front==NULL && rear==NULL)
  {
      cout<<"queue is empty";
  }
  else
  {

  front=front->next;
  free(temp);
   
  }
  

}
void print()
{
 struct node *temp=front;
 while(temp!=NULL)
 {
   cout<<temp->data;
   temp=temp->next;

 }


}




int main()
{
  front=NULL;
  rear=NULL;
  Enqueue(1);
  Enqueue(2);
  Enqueue(3);
  Enqueue(12);
  print();
  cout<<endl;
  Dequeue();
  print();

return 0;


}