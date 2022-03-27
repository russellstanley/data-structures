#pragma once
#include "Node.h"
#include <iostream>

class Queue
{

private:
    Node *head;
    Node *tail;

public:
    Queue();
    Queue(int value);

    void add(int value);
    int remove();
    int peek();
    bool isEmpty();
};