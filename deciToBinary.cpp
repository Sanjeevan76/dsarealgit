#include<iostream>
using namespace std;

int main()
{
    int n,bin=0,i=1;
    cout<<"Enter Decimal number =";
    cin>>n;
    int dec=n;

    while(n>0)
    {
        int rem=n%2;
        bin=rem*i+bin;
        i=i*10;
        n=n/2;
    }

    cout<<"Binary of "<< dec <<"=";
    cout<<bin<<endl;

    return 0;
}