#pragma once
#include "Node.h"
#include <iostream>

class Stack
{

private:
    Node *top;

public:
    Stack();
    Stack(int value);

    void push(int value);
    int peek();
    int pop();
    bool isEmpty();
};