#include <bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};

void insertAtTail(node* &head,int val){                     // INsert at the end of the list//
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

void insertAtHead(node* &head, int val){                     //Insert at the head of the linked list// 
node* n=new node(val);
n->next=head;
head=n;
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

void Insert (node* &head, int position, int val){              //Insert At any point in a linked list//
node* temp=head;
node* n=new node(val);
int count=1;
while (temp!=NULL)
{
    if (count==position)
    {
        node* tempo=temp->next;
        temp->next=n;
        n->next=tempo;
    }
    count++;
    temp=temp->next;
}
}




int main(){
node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
insertAtTail(head,5);
Print(head);
insertAtHead(head,10);
insertAtHead(head,55);
Print(head);
// cout<<"Enter the position you want to insert the key"<<endl;
Insert(head,3,36);
Print(head);

return 0;
}