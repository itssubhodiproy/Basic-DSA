#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    node* next =NULL;
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

void Print (node* &head){                                     //Print LinkedList//
    node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void Deletion(node* &head,int val){                           //Deletion in a Linked List
    node* temp=head;
    if (val==head->data)                                      // <<-----Delete at head 
    {
        node* deletehead=head;
        head=head->next;
        delete deletehead;
        return;
    }
    
    while (temp->next->data!=val)
    {
       temp=temp->next;
    }
    node* todelete=temp->next;                                // <<------Delete at Given Point
    temp->next=temp->next->next;
    delete todelete;
    
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    Print(head);
    Deletion(head,3);
    Print(head);
    Deletion(head,1);
    Print(head);
    return 0;
}