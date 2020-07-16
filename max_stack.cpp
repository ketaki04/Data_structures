//To find the maximum element in the stack

#include<iostream>
#include<stack>
using namespace std;

int main()
{
  int max,t;
  stack<int> s;
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(1);
  s.push(64);
  t=s.top();
  max=t;
  while(!s.empty())  {
  t=s.top();
  if(t>max || t==max)
  {
      max=t;
  }
  s.pop();

  }
  cout<<max;
  return 0;
}