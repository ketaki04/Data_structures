//reverse a linked list using stack
#include<iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head;
stack<struct node*> S;
void Create(int n)
{

struct node *temp,*newnode;
int x;
cout<<"enter data of node 1";
cin>>x;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=NULL;
head=temp;
for(int i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
cout<<"enter the dta of node"<<i<<endl;
cin>>x;
newnode->data=x;
newnode->next=NULL;
temp->next=newnode;
temp=temp->next;
}

}

void Reverse()
{
struct node *temp=head;         
while(temp!=NULL)            //here we push are linked list that we have created 
                             //into the stack       
{
    S.push(temp);
    temp=temp->next;
}
struct node *tmp=S.top();
head=tmp;
S.pop();
while(!S.empty())  //.................pop the elements from stack to linked list again
{
 tmp->next=S.top();
 S.pop();
 tmp=tmp->next;

}
tmp->next=NULL;

}
void Print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int main()
{
int n,x;
head=NULL;
cout<<"enter the size of the list";
cin>>n;
Create(n);
Print();
Reverse(); 
cout<<"List after reversing";
Print();
return 0;


}