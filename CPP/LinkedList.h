#include "Node.h"

#pragma once

class LinkedList
{
public:
    LinkedList();

    Node *head;

    void append(int value);
    void remove(int index);
    void reverse();

    void display();
    bool isEmpty();

    ~LinkedList();
};