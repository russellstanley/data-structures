#include "Queue.h"

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
}

Queue::Queue(int value)
{
    Node *node = new Node(value);
    head = node;
    tail = node;
}

void Queue::add(int value)
{
    Node *node = new Node(value);

    if (isEmpty())
    {
        head = node;
        tail = node;
        return;
    }

    tail->next = node;
    tail = node;
    return;
}

int Queue::remove()
{
    if (isEmpty())
    {
        std::cout << "Warning: Queue is empty" << std::endl;
        return 0;
    }
    if (head == tail)
    {
        int out = tail->value;
        head = nullptr;
        tail = nullptr;
        return out;
    }

    Node *current = head;
    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    int out = tail->value;
    tail = current;
    tail->next = nullptr;
    return out;
}

bool Queue::isEmpty()
{
    return head == nullptr;
}