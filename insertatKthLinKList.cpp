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

void insertBetween(node*& head,int val,int pos)
{
    if(pos==0)
    {
        insertHead(head,val);
    }
    else
    {
        int count=0;
        node* temp=head;

        while(count!=(pos-1))
        {
            temp=temp->next;
            count++;
            if(temp->next==NULL && count<(pos-1))
            {
                cout<<"invalid position enter list remain same"<<endl;
                return;
            }
        }

        if(temp->next==NULL)
        {
            insertTail(head,val);
           return;
        }
        node* newNodek=new node(val);
        newNodek->next=temp->next;
        temp->next=newNodek;
    }
}

int main()
{
    node* head=new node(5);

    insertTail(head,8);
    insertTail(head,7);
    insertHead(head,8);
    insertBetween(head,1,0);
   insertBetween(head,4,0);
   


    display(head);

}