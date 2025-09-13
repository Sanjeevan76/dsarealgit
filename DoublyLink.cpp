#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node*prev;

    node(int data)
    {
        val=data;
        next=NULL;
        prev=NULL;
    }
};

class doublLinklist{
    public:
    node* head=NULL;
    node* tail=NULL;

   doublLinklist()
   {
    head=NULL;
    tail=NULL;
   }

   //display
   void display()
   {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL";
   };


   //insert at start
   void insertAtstart(int data)
   {
    node* start=new node(data);
    if(head==NULL)
    {
        head=start;
        tail=start;
        return;
    }
    start->next=head;
    head->prev=start;
    head=start;
   }

   //insert at end
   void insertend(int data)
   {
    node* start=new node(data);
    if(tail==NULL)
    {
        head=start;
        tail=start;
        return;
    }
   
    tail->next=start;
    start->prev=tail;
    tail=start;
   }
};

int main()
{
    node* new_node=new node(3);
    doublLinklist ll;
    ll.head=new_node;
    ll.tail=new_node;
    ll.insertAtstart(4);
    ll.display();
    cout<<endl;
  
    ll.insertend(8);
    ll.display();
   
}