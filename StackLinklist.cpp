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

class Stack{
        node* head;
        int capacity;
        int currsize;

        public:
        Stack (int Size)
        {
            capacity=Size;
            currsize=0;
            head=NULL;
        }

    bool isEmpty()
    {
        return currsize==0;
    }

    bool isFull()
    {
        return currsize==capacity;
    }

    void push (int val)
    {
        if(currsize==capacity)
        {
            cout<<"overflow";
            return;
        }
        node* new_node=new node(val);
        new_node->next=head;
        head=new_node;
        currsize++;
    }

    int pop()
    {
        if(currsize==0)
        {
            cout<<"underflow";
            return INT_MIN;
        }

        node* new_node= head->next;
        head->next=NULL;
        int value=head->data;
        head=new_node;
        return value;
    }

    int size()
    {
        return currsize;
    }

  int  getTopdata(){
        if(head==NULL)
        {
            return -1;
        }
        return head->data;
    }

    void allstackdata()
    {
       node* next=head;
       while(next!=NULL)
       {
            cout<<next->data<<endl;
            next=next->next;
       }
       cout<<endl;
    }
};

int main()
{
    Stack st(7);
    st.isEmpty();
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<"top element: "<<st.getTopdata()<<endl;
    cout<<"stack elements from top"<<endl;
    st.allstackdata();
    st.push(10);
    st.push(9);
    st.push(1);
    st.pop();
    cout<<"stack elements from top"<<endl;
    st.allstackdata();
}