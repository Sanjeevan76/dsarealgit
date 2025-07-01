#include<iostream>
using namespace std;

stack<int>copystack(stack<int>&inputstack)
{   
    stack<int>temp;
    while(!inputstack.empty())
    {
        int val=inputstack.top();
        inputstack.pop();
        temp.push(val);
    }
    stack<int>final;
    while(!temp.empty())
    {
        int val=temp.top();
        temp.pop();
        final.push(val);
    }

    return final;
}

//using recursion

    void f(stack<int>&st,stack<int>&result)
    {
        if(st.empty()) return ;
        int curr=st.top();
        st.pop();
        f(st,result);
        result.push(curr);
    }

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<"stack before copy:"<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
       
        st.pop();
    }
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    // stack<int>result=copystack(st);  //without recursion
    stack<int>result;  //use for recursion
    f(st,result);
    cout<<"stack after copy:"<<endl;
    while(!result.empty())
    {
        cout<<result.top()<<endl;
      
        result.pop();
    }
}
