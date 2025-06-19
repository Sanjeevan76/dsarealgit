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

void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

void insertHead(node*& head,int val)
{
    node* newnode=new node(val);
    newnode->next=head;
    head=newnode;
}

int main()
{
    node* head=new node(5);

    insertHead(head,8);
    display(head);

}