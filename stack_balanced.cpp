//Using stack to detect  the the balanced paranthesis

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool ArePair(char opening,char closing)
{
    if(opening== '(' && closing==')')  return true;
    else if(opening== '[' && closing==']')  return true;
    else if(opening== '{' && closing=='}')  return true;
    return false;
}


bool AreParanthesisBalanced(string exp)
{
    stack<char> S;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        S.push(exp[i]);
        else if (exp[i]==')'||exp[i]==']'||exp[i]=='}')
        {
            if(S.empty() || !ArePair(S.top(),exp[i]))
            return false;
            else S.pop();

        }

    }
    return S.empty() ? true:false;
}
int main()
{
    
    string exp;
    cout<<"enter the string to check";
    cin>>exp;
    if(AreParanthesisBalanced(exp))
    cout<<"Balanced";
    else
    cout<<"Not_Balanced";
   return 0;
}
