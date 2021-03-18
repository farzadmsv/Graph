#include <list> 
using namespace std; 

class Graph{
public:
    int V; 
    list<int>* adj; 
    Graph(int);
    ~Graph();
    void addEdge(int,int);
    void DFS(int);
private:
    
};