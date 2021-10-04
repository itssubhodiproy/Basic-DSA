//Move All X's to the end of the string 
#include<bits/stdc++.h>
using namespace std;


int main(){

string s= "axxbdxcefxhix";string xs=""; string remain="";         //using for loop
for(int i=0;i<s.length();i++){
    if (s[i]=='x')
    {
        xs+=s[i];
    }
    else{
        remain+=s[i];
    }
}
s=remain+xs;
cout<<s<<endl;
return 0;
}