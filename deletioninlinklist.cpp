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

//delete at head
void deleteAtHead(node*& head) {
    if (head == NULL) return;

    node* temp = head;
    head = head->next;
    delete temp;
}

//delete at end
void deleteAtEnd(node*& head)
{
    if(head->next==NULL)
    {
        delete head;
    }
    node* temp1=head->next;
    node* temp2=head;
    while(temp1->next!=NULL)
    {
        temp2=temp1;
        temp1=temp1->next;
    }

    temp2->next=NULL;
    delete temp1;
}

//delete at kth node
void deletekthnode(node*& head,int pos)
{   
    if(pos==0)
    {
        deleteAtHead(head);
    }
    else{
        node* temp1=head;
        node* temp2=head->next;
        int count=0;
        if(temp2==NULL)
        {
            deleteAtEnd(head);
        }
        else
        {
            while(count!=(pos-1))
            {
                temp1=temp1->next;
                temp2=temp2->next;
                count++;
            }
            temp1->next=temp2->next;
            delete temp2;
        }
    }
}

//updatation of node
void updateNode(node*& head ,int pos,int val)
{
    node* temp=head;
   int count=0;
   while(count!=(pos-1))
   {
    temp=temp->next;
    count++;
   }
   temp->data=val;

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
    deleteAtHead(head);
    cout<<"\n";
    display(head);
    deleteAtEnd(head);
    cout<<"\n";
    display(head);
    deletekthnode(head,2);
    cout<<"\n";
    display(head);
    updateNode(head,1,10);
    cout<<"\n";
    display(head);
}