#include "Graph.h"
#include "Solution.h"
#include <iostream>

int main() {
    std::string filePath = "graph.txt";
    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cerr << "Can't open the file" << std::endl;
        return 1;
    }

    Graph graph;
    graph.readGraph(file);

    int target;
    file >> target;

    Solution solution;
    solution.solve(graph, target);
    solution.showAnswer();
}