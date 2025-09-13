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

void movek(node*& head,int k)
{
    // node* first=head;
    // node* second=head;
    node* newNode=new node(0);
 
    // ListNode* prev=newNode;
   
    newNode->next=head;
    head=newNode;
    head=head->next;
}

int main()
{   
    //inseeting list
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    node* fourth=new node(4);
    node* fifth=new node(5);

    //appoint pointer
 head->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=fifth;
 movek(head,0);
    //traversing
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
  
    


}