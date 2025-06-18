#include <iostream>
using namespace std;

int main()
{
    int decimal,binary=0,rem=0,i=1;

   cout<<"Enter Decimal number =";
    cin>>decimal;

    while (decimal>0)
    {
        rem=decimal%2;
        decimal=decimal/2;
        binary=rem*i+binary;
        i=i*10;
    }

    cout<<"binary is"<<binary;

    return 0;   

}