#include<iostream>
using namespace std;
#define NO_OF_CHARS 256 
int areAnagram(string str1,string str2) 
{ 
    // Create a count array and initialize all values as 0 
    int count[NO_OF_CHARS] = { 0 }; 
    int i,cnt=0; 
  
    // For each character in input strings, increment count in 
    // the corresponding count array 
    for (i = 0; str1[i] != str2[i]; i++) { 
        count[str1[i]]++; 
        count[str2[i]]--; 
    } 
  
    // If both strings are of different length. Removing this condition 
    // will make the program fail for strings like "aaca" and "aca" 
     
  
    // See if there is any non-zero value in count array 
    for (i = 0; i < NO_OF_CHARS; i++) 
        if (count[i]!=0)
		{
		cnt++; 
		}
		
    return cnt; 
} 

int main() 
{ int cnt,N;
    string str1;  
    string str2;
	cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>str1;
        cin>>str2;
	cnt=areAnagram(str1,str2);
    cout<<cnt<<endl;
    }
  
    return 0; 
} 