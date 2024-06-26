#include<iostream>
using namespace std;
int main()
{
    int row,colm,i,j;

    cout<<"enter number of row and colum";
    cin>>row>>colm;
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            if(i==0 || i==row-1 || j==0 || j==colm-1)
            {
                cout<<"*";
            }

            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}