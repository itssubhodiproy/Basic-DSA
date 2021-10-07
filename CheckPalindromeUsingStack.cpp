#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    stack <char> st;string words="";
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    while (!st.empty())
    {
        words+=st.top();
        st.pop();
    }
    if (words==s)
    {
        return true;
    }
    return false;
}
int main(){
    string s="SUBHO";              // <<---------Non-Palindrome Words
    // string s="NITIN";             //  <<---------Palindrome Words
    if(palindrome(s)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Non-Palindrome"<<endl;
    }
    return 0;
}