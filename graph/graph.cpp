#include <iostream>

//edge list representation

//edge list can be used to represent a graph in a very simple way but it is not very efficient

std::string vertices[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I"};
int edges[][3] = {{0, 1, 3}, {0, 3, 2}, {1, 2, 6}, {1, 4, 7}, {2, 5, 7}, {3, 4, 2}, {3, 6, 1}, {4, 5, 8}, {4, 7, 3}, {5, 8, 1}, {6, 7, 2}, {7, 8, 1}};

class Edge{
    public:
        std::string start_vertex, end_vertex;
        int weight;
};

int main(){

    Edge edge_list[12];

    for(int i = 0; i < 12; i++){
        edge_list[i].start_vertex = vertices[edges[i][0]];
        edge_list[i].end_vertex = vertices[edges[i][1]];
        edge_list[i].weight = edges[i][2];
    }

    for(int i = 0; i < 12; i++){
        std::cout << edge_list[i].start_vertex << " - " << edge_list[i].end_vertex << " >> cost: " << edge_list[i].weight << std::endl;
    }

    return 0;

}