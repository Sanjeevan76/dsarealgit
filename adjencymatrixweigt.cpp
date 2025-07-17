#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int vertex,edge;

    cin>>vertex>>edge;
    vector<vector<int> >adj(vertex,vector<int>(vertex,0));

    int u,v,w;
    for(int i=0;i<edge;i++)
    {
        cout<<"give edge and their associated weight"<<endl;
        cin>>u>>v>>w;
        adj[u][v]=w;
    }

    for(int j=0;j<vertex;j++)
    {
        for(int k=0;k<edge;k++)
        {
            cout<<adj[j][k]<<" ";
        }
        cout<<endl;
    }
}