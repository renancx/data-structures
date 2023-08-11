#include <iostream>
#include <vector>
#include <list>

//adjacency list representation
//adjacency list is an array of vectors where each vector represents a vertex

class Graph{
    private:
        int numVertices;
        std::vector<std::list<int>> adjList;
    public:
        Graph(int vertices) : numVertices(vertices){
            adjList.resize(vertices);
        }

        void addEdge(int src, int dest){
            if(src >= 0 && src < numVertices && dest >= 0 && dest < numVertices){
                adjList[src].push_back(dest);
                adjList[dest].push_back(src);
            }
        }

        void printAdjList(){
            for(int i = 0; i < numVertices; ++i){
                std::cout << i << " -> ";
                for(auto j : adjList[i]){
                    std::cout << j << " ";
                }
                std::cout << std::endl;
            }
        }
};

int main(){
    Graph graph(8);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(4, 6);
    graph.addEdge(5, 7);
    graph.addEdge(6, 7);
    graph.addEdge(7, 0);
    graph.addEdge(7, 1);

    graph.printAdjList();

}