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

int main()
{   
    //inseeting list
    node* head=new node(5);
    node* second=new node(4);
    node* third=new node(6);

    //appoint pointer
 head->next=second;
 second->next=third;

    //traversing
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

}