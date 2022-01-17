#include<bits/stdc++.h>
using namespace std;

bool BalancedParenthesis(string s){
stack<char>st;
for (int i = 0; i < s.length();  i++)
{
    if (s[i]=='('||s[i]=='{'||s[i]=='[')
    {
       st.push(s[i]);
    }

    if (s[i]==')'||s[i]=='}'||s[i]==']')
    {

    if(st.empty()) return false;             // <<----Edge case(1) 
       
       if (s[i]==')' && st.top()=='(' || s[i]=='}' && st.top()=='{'||s[i]==']' && st.top()=='[')
       {
           st.pop();
       } 
       else
       {
           return false;               // If it doesn't match with Top 
       }
    }
}
if (st.empty())                  
{
   return true;
}
return false;                           //  <<------Edge case(2)

}

int main(){
string s="({[]})";
if (BalancedParenthesis(s))
{
    cout<<"Yes! This is a valid parenthesis"<<endl;
}
else{
    cout<<"Nope! This is not a valid parenthesis"<<endl;
}
return 0;
}
