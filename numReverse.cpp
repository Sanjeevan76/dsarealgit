#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,i=1;
    cout<<"enter any number";
    cin>>n;
    while(n>0)
    {
        int rem=n%10;
        rev=i*rem+rev;
        i=i*10;
        n=n/10;
    }

    cout<<rev;
    return 0;
}