#ifndef CHECKTASK_SOLUTION_H
#define CHECKTASK_SOLUTION_H
#include "Graph.h"
#include <iostream>
#include <queue>

class Solution {
public:
    void solve(Graph& graph, int targetVertex);
    void showAnswer();
private:
    std::vector<int> distances;
};

#endif //CHECKTASK_SOLUTION_H
