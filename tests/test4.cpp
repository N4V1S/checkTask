#include "Graph.h"
#include "Solution.h"

int main() {
    std::string filePath = "test4.in";
    std::ifstream file(filePath);

    Graph graph;
    graph.readGraph(file);

    int target;
    file >> target;

    Solution solution;
    solution.solve(graph, target);
    solution.showAnswer();
}