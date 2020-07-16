//Reverse a string using Stack
//Using inbuild Stack library to perform the stack functions

#include<iostream>
#include<stack>  
#include<cstring>
using namespace std;

void reverse(char *st,int n)
{
 stack<char> S;
 for(int i=0;i<n;i++)
 {
     S.push(st[i]);
 }
 for(int i=0;i<n;i++)
 {
     st[i]=S.top();    //first copying the top value of the stack 
     S.pop();           //and then perform the pop function
 }
 

}
int main()
{
    char s[20];
    cout<<"enter the string";
    cin>>s;
    reverse(s,strlen(s));  //passing the string and the string length
    cout<<"reverse string"<<endl;
    cout<<s;

    return 0;
}