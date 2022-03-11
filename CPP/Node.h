#pragma once

class Node
{

public:
    Node();
    Node(int value);

    int value;
    Node *next;

    ~Node();
};