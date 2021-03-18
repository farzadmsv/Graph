#include <iostream>
#include "inc/graph.h"

int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.DFS(0);
    return 0;
}