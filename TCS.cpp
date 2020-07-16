//This is The Coding Area
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
  int T,N,SUM,j,Count,k;
  cin>>T;
  if(T<100)
  {
  int a[T];

  for(int i=0;i<T;i++)
  {
      cin>>a[i];
  }
  

  for(k=0;k<T;k++)
  { 
    int x=0;
   while(pow(2,x)<a[k])
     x++;
    cout<<x<<endl;
    
  }
    
    
  
  }
return 0;
}