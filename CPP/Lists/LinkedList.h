#include "Node.h"

#pragma once

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();

    void append(int value);
    void remove(int index);
    void reverse();

    void display();
    bool isEmpty();

    ~LinkedList();
};