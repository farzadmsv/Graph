#include "../inc/graph.h"
#include <iostream> 

Graph::Graph(int V){
    this->V = V; 
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
}

void Graph::DFS(int r){
    std::cout << r << std::endl;
    for(auto i = adj[r].begin(); i != adj[r].end(); i++)
        Graph::DFS(*i);
}

Graph::~Graph(){
    delete[] adj;
}