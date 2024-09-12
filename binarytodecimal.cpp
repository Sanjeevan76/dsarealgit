#include <iostream>
using namespace std;

int main()
{
    string binary;
    int decimal=0,i;
    cout<<"enter binary number";
    cin>>binary;

    int len= binary.length();
     len=len-1;
     cout<<len<<endl;
    int binlen=len;
   for(i=0;i<=len;i++)
   {
    if(binary[i]=='1')
   {
        decimal=decimal+pow(2,binlen);
       cout<<decimal;
    binlen--;
        
    }

    else{
        decimal=decimal+0;
        binlen--;
    }
   }
   

    cout<<"decimal ="<<decimal;

    return 0;
    
}