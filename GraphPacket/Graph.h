#ifndef CHECKTASK_GRAPH_H
#define CHECKTASK_GRAPH_H
#include <vector>
#include <string>
#include <fstream>

class Graph {
public:
    void readGraph (std::ifstream& file);
    void setGraph(std::vector <std::vector<int>> other);
    std::vector <std::vector<int>>& getGraph();
    size_t size();
private:
    std::vector <std::vector<int>> graph;
};

#endif //CHECKTASK_GRAPH_H
