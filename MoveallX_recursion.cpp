//Move All X's to the end of the string using Recursion
#include<bits/stdc++.h>
using namespace std;

string MoveallX(string s){
if (s.length()==0)
{
    return "";
}
    char ch=s[0];
    if (ch=='x')
    {
        return MoveallX(s.substr(1))+ch;
    }
    else{
        return ch+MoveallX(s.substr(1));
    }
}


int main(){
string s= "axxbdxcefxhix";                                //using Recursion 
string ans=MoveallX(s);       
cout<<ans<<endl;
return 0;
}