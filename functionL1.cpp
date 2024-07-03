#include<iostream>
using namespace std;
int sum(int num1,int num2)
{
    int addition=num1+num2;
    return addition;
}
// we are able to make a another function with the same name but with diefferent parameter (num1,num2,num3)

int main()
{
    int num1=10;
    int num2=5;
    int final=sum(num1,num2); // we can also call the function with direct passing by parameter
    cout<<final<<endl;

return 0;
}

// another function example

int sum(int num1,int num2,int num3)
{
    int addition=num1+num2+num3;
    return addition;
}

int main(){
   cout<< sum(10,10,5)<<endl;

    return 0;
}


// evaluate square and power

#include<iostream>
#include<cmath>
using namespace std;

int number(int n1,int n2){
    cout<<pow(n1,n2)<<endl;
    cout<<sqrt(n1)<<endl;//always return value in float
    int sqr=sqrt(n1);
    cout<<sqr<<endl; // it gives integer value

    return 0;
}

int main()
{
    number(2,2);
    return 0;
}