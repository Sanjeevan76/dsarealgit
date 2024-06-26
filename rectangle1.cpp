#include<iostream>
using namespace std;
int main()
{
    int row,colm;
    int n;

    cout<<"enter number of row and coloum";
    cin>>row>>colm;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}