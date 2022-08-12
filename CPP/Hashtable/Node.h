/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Node header file
*/

#include <string>
#include <iostream>
#pragma once

class Node
{

public:
    Node();
    Node(std::string key, int value);

    std::string key;
    int value;

    ~Node();
};