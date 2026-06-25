#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Undirected,unweighted Graph

    int vertices,edges;
    cin>>vertices>>edges;

    vector<int> AdjList[vertices];

    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    for(int i=0;i<vertices;i++){
        cout<<i<<" -> ";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    }


    // Undirected,weighted Graph

    // int vertices,edges;
    // cin>>vertices>>edges;

    // vector<pair<int,int>> AdjList[vertices];

    // int u,v,weight;
    // for(int i=0;i<edges;i++){
    //     cin>>u>>v>>weight;
    //     AdjList[u].push_back(make_pair(v,weight));
    //     AdjList[v].push_back(make_pair(u,weight));
    // }

    // for(int i=0;i<vertices;i++){
    //     cout<<i<<" -> ";
    //     for(int j=0;j<AdjList[i].size();j++){
    //         cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";
    //     }
    //     cout<<endl;
    // }

    // Directed,unweighted Graph

    // int vertices,edges;
    // cin>>vertices>>edges;

    // vector<int> AdjList[vertices];

    // int u,v;
    // for(int i=0;i<edges;i++){
    //     cin>>u>>v;
    //     AdjList[u].push_back(v);
    // }

    // for(int i=0;i<vertices;i++){
    //     cout<<i<<" -> ";
    //     for(int j=0;j<AdjList[i].size();j++){
    //         cout<<AdjList[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Directed,weighted Graph

    // int vertices,edges;
    // cin>>vertices>>edges;

    // vector<pair<int,int>> AdjList[vertices];

    // int u,v,weight;
    // for(int i=0;i<edges;i++){
    //     cin>>u>>v>>weight;
    //     AdjList[u].push_back(make_pair(v,weight));
    // }

    // for(int i=0;i<vertices;i++){
    //     cout<<i<<" -> ";
    //     for(int j=0;j<AdjList[i].size();j++){
    //         cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}