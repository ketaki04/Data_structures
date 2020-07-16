//queue implementation using array.
//Functions   
/*
Enqueue----to add the elements to the queue from the rear end..
Dequeue----to delete the element from the queue through the front end.
IsFull------to check if the queue is full so to stop the enqueue function.
Isempty-----tocheck if the queue is empty and thta no more dequeue can be performed.


*/
#include<iostream>
using namespace std;
#define maxsize 10;
int array[10];
int front;
int rear;

bool IsFull()
{
    if(rear==9)
    return true;
    else
    {
        return false;
    }
    
}

void Print(int *queue)
{
   for(int i=0;i<10;i++)
   {
       cout<<queue[i];
   }
   cout<<endl;
}
bool IsEmpty()
{
 if(rear==-1 && front==-1)
 {
     return true;
 }
 else
 {
     return false;
 }
 
}

void Enqueue(int x)
{
   if (IsEmpty())
   {
       rear=0;
       front=0;
       array[rear]=x;
   }
   else if(IsFull())
   {
       cout<<"queue is full";
   }
   else 
   {
     rear=rear+1;
     array[rear]=x;

   }
}


void Dequeue()
{
    if(IsEmpty())
    {
        cout<<"queue is empty";
    }
    else if(front==rear && front==0)
    {
        rear=-1;
        front=-1;
    }
    else
    {
        array[front]=0;
        front=front+1;
    }
    

}


//**********************************************************************************
int main()
{ 
    
    rear=-1;
    front=-1;
    
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Print(array);
    Dequeue();
    Print(array);
    Enqueue(4);
    Enqueue(5);
   Print(array);


    return 0;

}