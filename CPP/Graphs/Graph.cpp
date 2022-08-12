/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Graph implementation with BFS and DFS.
*/

#include "Graph.h"

Graph::Graph()
{
    found = false;
    steps = 0;
    for (int i = 0; i < nVertices; i++)
    {
        visited[i] = false;
        for (int j = 0; j < nVertices; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void Graph::addEdge(int start, int end, int weight)
{
    matrix[start][end] = weight;
}

void Graph::removeEdge(int start, int end)
{
    matrix[start][end] = 0;
}

// Depth first search for the target node
bool Graph::DFS(int vertex, int target)
{
    visited[vertex] = true;
    steps++;
    if (vertex == target)
    {
        found = true;
    }
    if (found == true)
    {
        return true;
    }

    for (int i = 0; i < nVertices; i++)
    {
        // Search the next available adjacent vertex
        if (matrix[vertex][i] != 0 && visited[i] == false)
        {
            DFS(i, target);
        }
    }
    return found;
}

// Breadth first search for the target node
bool Graph::BFS(int vertex, int target)
{
    std::queue<int> queue;
    visited[vertex] = true;
    queue.push(vertex);
    while (!queue.empty())
    {
        steps++;
        if (queue.front() == target)
        {
            return true;
        }

        for (int i = 0; i < nVertices; i++)
        {
            // Add all adjacent vertices to queue
            if (matrix[queue.front()][i] != 0 && visited[i] == false)
            {
                queue.push(i);
            }
        }
        queue.pop();
    }
    return false;
}

void Graph::pretty()
{
    for (int i = 0; i < nVertices + 1; i++)
    {
        for (int j = 0; j < nVertices + 1; j++)
        {
            if (j == nVertices && i == nVertices)
            {
                std::cout << "G\t" << std::flush;
                continue;
            }
            if (j == nVertices)
            {
                std::cout << i << "\t" << std::flush;
                continue;
            }
            if (i == nVertices)
            {
                std::cout << j << "\t" << std::flush;
                continue;
            }
            std::cout << matrix[i][j] << "\t" << std::flush;
        }
        std::cout << std::endl;
    }
}

Graph::~Graph() {}