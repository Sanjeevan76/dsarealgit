#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int edge,vertex;
    cin>>vertex>>edge;

    vector<vector <int> >adj(vertex,vector<int>(vertex,0));

    int u,v,w;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>w;
        adj[u][v]=w;
        adj[v][u]=w;

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