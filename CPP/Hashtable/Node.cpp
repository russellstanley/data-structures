#include "Node.h"

Node::Node()
{
    value = 0;
    key = "";
}

Node::Node(std::string k, int v)
{
    key = k;
    value = v;
}

Node::~Node()
{
}