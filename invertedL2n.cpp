#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter number of level";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<j<<" ";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}