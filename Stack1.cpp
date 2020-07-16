//Stack implementation using array

#include<iostream>
using namespace std;

#define MAXSIZE 101
int stack[MAXSIZE];
int top=-1;

void Push(int x)
{
if(top==MAXSIZE-1)
cout<<"Error of overflow";
top++;
stack[top]=x;

}

void Pop()
{
    if(top==-1)
    cout<<"Stack empty";
    top--;
}
void Print()
{
 for(int i=0;i<=top;i++)
 {
     cout<<stack[i];
 }

}

int main()
{
    int x;
    Push(2);
    Push(3);
    Push(4);
    Print();
    cout<<""<<endl;
    Pop();
    Print();
    return 0;

}