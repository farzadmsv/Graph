#include <list> 

using namespace std; 

class Graph{
public:
    int V; 
    list<int>* adj; 
    Graph(int);
    void addEdge(int,int);
};