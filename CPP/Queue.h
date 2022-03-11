#pragma once
#include "Node.h"
#include <iostream>

class Queue
{

public:
    Node *head;
    Node *tail;

    Queue();
    Queue(int value);

    void add(int value);
    int remove();
    int peek();
    bool isEmpty();
};