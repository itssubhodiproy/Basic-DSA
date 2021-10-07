//Reverse a stack without using extra space//
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int ele){              //Placing Element at last of the stack//
if (st.empty())
{
   st.push(ele);
   return;
}
int topele=st.top();st.pop();
insertAtBottom(st,ele);
st.push(topele);
}

void reverse(stack<int> &st){                              //Reason behind reverse recursive//
if (st.empty())
{
   return;
}
int ele=st.top();st.pop();
reverse(st);
insertAtBottom(st,ele);
}


int main(){
stack<int> st;
for (int i = 1; i <=5 ; i++)
{
    st.push(i);
}
reverse(st);                 // <<------------Comment it out for seeing difference
while (!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}