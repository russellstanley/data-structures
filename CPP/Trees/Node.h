#include <iostream>
#pragma once

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node();
    Node(int value);
};