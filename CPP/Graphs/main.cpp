/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Graph testing file.
*/

#include "Graph.h"

Graph basic()
{
    Graph graph;
    graph.addEdge(0, 1, 1);
    graph.addEdge(0, 2, 1);
    graph.addEdge(0, 3, 1);
    graph.addEdge(1, 2, 1);
    graph.addEdge(2, 4, 1);
    graph.addEdge(4, 0, 1);
    graph.removeEdge(4, 0);
    return graph;
}

Graph tree()
{
    Graph graph;
    graph.addEdge(0, 1, 1);
    graph.addEdge(1, 2, 1);
    graph.addEdge(2, 3, 1);

    graph.addEdge(0, 4, 1);
    graph.addEdge(4, 5, 1);
    graph.addEdge(5, 6, 1);
    graph.addEdge(4, 7, 1);

    graph.addEdge(0, 8, 1);
    graph.addEdge(8, 9, 1);
    return graph;
}

void testGraph()
{
    Graph graphDFS = basic();
    Graph graphBFS = basic();

    Graph treeDFS = tree();
    Graph treeBFS = tree();

    if (!graphDFS.DFS(0, 3) || graphDFS.steps != 5)
    {
        std::cout << "Basic DFS Error" << std::endl;
    }
    if (!graphBFS.BFS(0, 3) || graphBFS.steps != 4)
    {
        std::cout << "Basic BFS Error" << std::endl;
    }
    if (!treeBFS.BFS(0, 8) || treeBFS.steps != 4)
    {
        std::cout << "Tree BFS Error" << std::endl;
    }
    if (!treeDFS.DFS(0, 8) || treeDFS.steps != 9)
    {
        std::cout << "Tree DFS Error" << std::endl;
    }
}

int main()
{
    std::cout << "Testing: Graph" << std::endl;
    testGraph();
    return 0;
}