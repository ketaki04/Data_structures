//Stack implementation using linked list

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top=NULL;

void Push(int x)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    if(top!=NULL)
    {
    temp->next=top;
    top=temp;

    }
    else
    {
        top=temp;
    }  
}

void Pop()
{
  struct Node *temp=top;
  top=top->next;
  free(temp);

}

void Print()
{
struct Node *temp=top;
while(temp!=NULL)
{
    cout<<temp->data;
    temp=temp->next;
}

}

int main()
{
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Push(6);
    Push(7);
    Print();
    cout<<" "<<endl;
    Pop();
    Pop();
    Print();
    return 0;
}