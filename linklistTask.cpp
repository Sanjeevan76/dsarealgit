// Given the head of a linked list, delete every alternate element from the list starting from the second element

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void deleteAlternateFromSecond(node*& head)
{
    node* temp=head;
   node* temp1=temp->next;
   node* currNode=temp1;

    while(currNode->next!=NULL)
    {       node* currNode=temp1;
        temp->next=temp1->next;
        temp1=temp1->next;
        delete currNode;
    }
}

int main()
{   
    //inseeting list
    node* head=new node(5);
    node* second=new node(4);
    node* third=new node(6);
    node* fourth=new node(1);
    node* fifth=new node(2);
    node* sixth=new node(3);

    //appoint pointer
 head->next=second;
 second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=NULL;
    //traversing
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";

    deleteAlternateFromSecond(head);
    
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}