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

//insert at head
void insertHead(node*& head,int val)
{
    node* newnode=new node(val);
    newnode->next=head;
    head=newnode;
}

//insert at tail
void insertTail(node*& head,int val)
{
    node* tailNode=new node(val);
    if(head==NULL)  //check if no element in head then put the element at head
    {
       head=tailNode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=tailNode;
    tailNode=NULL;
}

int main()
{
    node* head=new node(5);

    insertTail(head,8);
    insertTail(head,7);
    insertHead(head,8);
    display(head);

}