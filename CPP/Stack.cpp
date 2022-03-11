#include "Stack.h"

// Create an empty stack.
Stack::Stack()
{
    top = nullptr;
}

// Create a stack with value
Stack::Stack(int value)
{
    top = new Node(value);
}

void Stack::push(int value)
{
    Node *node = new Node(value);

    if (isEmpty())
    {
        top = node;
        return;
    }

    node->next = top;
    top = node;
    return;
}

int Stack::pop()
{
    int out = top->value;
    top = top->next;

    return out;
}

int Stack::peek()
{
    if (isEmpty())
    {
        std::cout << "Warning: stack is empty" << std::endl;
        return 0;
    }
    return top->value;
}

bool Stack::isEmpty()
{
    return top == nullptr;
}
