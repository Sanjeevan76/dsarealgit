#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.resize(2);
    cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;

     v.resize(3);
      cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;

     v.resize(5);
     cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
    return 0;
}