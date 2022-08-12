#include <iostream>
#include "Node.h"

Node::Node()
{
    value = 0;
    next = nullptr;
}

Node::Node(int v)
{
    value = v;
    next = nullptr;
}

Node::~Node() {}