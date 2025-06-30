#include<iostream>
using namespace std;

class stackarr{
public:
int *arr;
int top;
int capacity;

 stackarr(int data)
{
    capacity=data;
    arr=new int[capacity];
    top=-1;
}

void push(int data)
{
    if(top==(capacity-1))
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        top++;
        arr[top]=data;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;

    }

    else{
        top--;
    }
}

int TOP()
{
    if(top==-1)
    {
        cout<<"underflow";
        return -1;
    }
    else{
        return arr[top];
    }
}

bool empty()
{
    if(top==-1)
    {
        return true;
    }
    return false;
}
void print()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


};
int main()
{
    stackarr st(4);

    st.push(3);
    st.push(5);
    st.push(4);
    st.push(1);
    st.push(9);
    cout << "Top element: " << st.TOP() << endl;
    st.pop();
    cout << "After pop, top element: " << st.TOP() << endl;

   
    st. print();
}
