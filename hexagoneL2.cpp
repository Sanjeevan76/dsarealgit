#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter number of stage";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}