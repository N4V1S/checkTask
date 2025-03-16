#include "Graph.h"

void Graph::readGraph(std::ifstream& file) {
    int size;
    int edgesCount;
    file >> size >> edgesCount;
    graph.resize(size);

    for (int i = 0; i < edgesCount; i++) {
        int u, v;
        file >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}

size_t Graph::size() {
    return graph.size();
}

std::vector<std::vector<int>>& Graph::getGraph() {
    return graph;
}

void Graph::setGraph(std::vector <std::vector<int>> other) {
    graph = other;
}
