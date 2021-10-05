#include<bits/stdc++.h>
using namespace std;
class node {
public:
int data;
node* next;
node( int val){
    data=val;
    next= NULL;
}
};
void insertAtTail(node* &head,int val){                     // Insert at the end of the list//
node* n=new node(val);
if (head==NULL)
{
    head=n;
    return;
}
node *temp= head;
while (temp->next!=NULL)
{
   temp=temp->next;
}
temp->next=n;
}

void Print (node* &head){                                     //Print LinkedList//
    node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node *reverse(node* &head){                                  //Reverse Recursive call
if(head->next==NULL||head==NULL){
    return head;
}
    node* newnode=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newnode;
}



int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    Print(head);
    node* newhead=(reverse(head));
    Print(newhead);
    return 0;
}