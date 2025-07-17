#include<iostream>
#include<vector>
using namespace std;

int main()
{
int  vertex,edge;
cin>>vertex>>edge;

vector<vector<int> >adj(vertex,vector<int>(vertex,0));

    int u,v;

    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
    }

    for(int j=0;j<vertex;j++)
    {
        for(int k=0;k<edge;k++)
        {
            cout<<adj[j][k];
        }
        cout<<endl;
    }
}