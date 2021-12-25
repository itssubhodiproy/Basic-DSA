#include<bits/stdc++.h>
using namespace std;

void reverseSentence(string s){
string words="";
stack<string>st;
for (int i = 0; i <= s.length(); i++)
{
    if (s[i]==' ' || i==s.length())          //  <<--------Handling edgecase for lase word, bcoz push happend only when there's space, for the last word there is no space in the end. 
    {
       st.push(words);
       words="";
    }
    else{
    words+=s[i];
    }
}
while (!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;
}
int main(){
string s;
getline(cin,  s);
reverseSentence(s);

return 0;
}
