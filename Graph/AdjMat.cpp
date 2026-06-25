#include<iostream>
#include<vector>
using namespace std;

int main(){

    // undirected,unweighted Graph

    int vertices,edges;
    cin>>vertices>>edges;
    vector<vector<bool>> AdjMat(vertices,vector<bool>(vertices,0));

    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
    }
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }


    // undirected,weighted Graph

    // int vertices,edges;
    // cin>>vertices>>edges;
    // vector<vector<int>> AdjMat(vertices,vector<int>(vertices,0));

    // int u,v,weight;
    // for(int i=0;i<edges;i++){
    //     cin>>u>>v>>weight;
    //     AdjMat[u][v]=weight;
    //     AdjMat[v][u]=weight;
    // }
    // for(int i=0;i<vertices;i++){
    //     for(int j=0;j<vertices;j++){
    //         cout<<AdjMat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // directed,unweighted Graph

    // int vertices,edges;
    // cin>>vertices>>edges;
    // vector<vector<int>> AdjMat(vertices,vector<int>(vertices,0));

    // int u,v;
    // for(int i=0;i<edges;i++){
    //     cin>>u>>v;
    //     AdjMat[u][v]=1;
    // }
    // for(int i=0;i<vertices;i++){
    //     for(int j=0;j<vertices;j++){
    //         cout<<AdjMat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    // directed,weighted Graph

    // int vertices,edges;
    // cin>>vertices>>edges;
    // vector<vector<int>> AdjMat(vertices,vector<int>(vertices,0));

    // int u,v,weight;
    // for(int i=0;i<edges;i++){
    //     cin>>u>>v>>weight;
    //     AdjMat[u][v]=weight;
    // }
    // for(int i=0;i<vertices;i++){
    //     for(int j=0;j<vertices;j++){
    //         cout<<AdjMat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    return 0;
}