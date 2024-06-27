#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter number of level";
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<n-i)
            {
                cout<<"";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}