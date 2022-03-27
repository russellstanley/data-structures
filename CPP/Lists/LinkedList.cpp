#include <iostream>
#include "LinkedList.h"

// Create an empty linked list.
LinkedList::LinkedList()
{
    this->head = nullptr;
}

// Append an element to the end of a linked list.
void LinkedList::append(int value)
{
    Node *node = new Node(value);

    // Check null conditon.
    if (isEmpty())
    {
        head = node;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = node;
    }
    return;
}

// Display the linked list.
void LinkedList::display()
{
    Node *current = head;

    // Check null conditon.
    if (isEmpty())
    {
        std::cout << "List is empty" << std::endl;
        return;
    }

    while (current->next != nullptr)
    {
        std::cout << current->value << "->" << std::flush;
        current = current->next;
    }
    std::cout << current->value << std::endl;
    return;
}

// Remove an element in the list at the given index.
void LinkedList::remove(int index)
{
    Node *current = head;
    int counter = 1;

    // Check null conditon.
    if (isEmpty())
    {
        std::cout << "List is empty, cannot remove" << std::endl;
        return;
    }

    if (index == 0)
    {
        head = head->next;
        return;
    }
    while (current->next != nullptr)
    {
        if (counter == index)
        {
            current->next = current->next->next;
            return;
        }
        current = current->next;
        counter++;
    }
    std::cout << "End of list, element not found" << std::endl;
}

// Reverse the linked list
void LinkedList::reverse()
{
    // Check null conditon.
    if (isEmpty())
    {
        std::cout << "List is empty, cannot reverse" << std::endl;
        return;
    }

    Node *previous = head;
    Node *current = previous->next;
    Node *following = current->next;
    previous->next = nullptr;

    while (following->next != nullptr)
    {
        current->next = previous;

        previous = current;
        current = following;
        following = following->next;
    }

    current->next = previous;
    following->next = current;
    head = following;
}

bool LinkedList::isEmpty()
{
    if (head == nullptr)
    {
        return true;
    }
    return false;
}

LinkedList::~LinkedList()
{
}