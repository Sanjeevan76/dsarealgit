#include<iostream>
using namespace std;

int main()
{
    int n,i,j;

    cout<<"enter number of level";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<i;
            }

            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}