#include "Graph.h"
#include "Solution.h"

int main() {
    std::string filePath = "test1.in";
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