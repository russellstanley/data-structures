/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Graph data structure header file.
*/

#pragma once
#include <iostream>
#include <queue>

const int nVertices = 10;

class Graph
{
private:
  int matrix[nVertices][nVertices];
  bool visited[nVertices];

public:
  Graph();
  bool found;
  int steps;

  void addEdge(int start, int end, int weight);
  void removeEdge(int start, int end);
  void pretty();

  bool DFS(int vertex, int target);
  bool BFS(int vertex, int target);

  ~Graph();
};