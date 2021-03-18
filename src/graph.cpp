#include "../inc/graph.h"

Graph::Graph(int V){
    this->V = V; 
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
}