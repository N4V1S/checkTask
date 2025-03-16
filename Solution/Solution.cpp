#include "Solution.h"

void Solution::solve(Graph &graph, int targetVertex) {
    distances.assign(graph.size(), -1);
    //solution which I want to write -- usual BFS
    std::queue<int> q;

    distances[targetVertex] = 0;
    q.push(targetVertex);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : graph.getGraph()[current]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = distances[current] + 1;
                q.push(neighbor);
            }
        }
    }
}

void Solution::showAnswer() {
    for (auto distance: distances) {
        std::cout << distance << '\n';
    }
}
