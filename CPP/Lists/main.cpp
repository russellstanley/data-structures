#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int array[10] = {61, 51, 48, 84, 44, 45, 21, 5, 6, 82};

// Appends and removes n elements, if the array is empty then the test passes.
void testRemove(bool verbose)
{
    LinkedList list;
    int n = 12;

    for (int i = 0; i < n; i++)
    {
        list.append(i * 2);
    }
    for (int i = 0; i < n; i++)
    {
        list.remove(0);
    }
}

void testReverse(bool verbose)
{
    LinkedList list;
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        list.append(i * 2);
    }
    list.reverse();
}

void testStack(bool verbose)
{
    Stack emptyStack;
    if (!emptyStack.isEmpty())
    {
        std::cout << "isEmpty() incorrect" << std::endl;
        return;
    }

    Stack stack(array[0]);
    stack.peek();

    if (stack.isEmpty())
    {
        std::cout << "isEmpty() incorrect" << std::endl;
        return;
    }

    for (int i = 1; i < 10; i++)
    {
        stack.push(array[i]);
    }

    while (!stack.isEmpty())
    {
        stack.pop();
    }
    return;
}

void testQueue(bool verbose)
{
    Queue emptyQueue;
    if (!emptyQueue.isEmpty())
    {
        std::cout << "isEmpty() incorrect" << std::endl;
        return;
    }

    Queue queue(array[0]);
    for (int i = 1; i < 10; i++)
    {
        queue.add(array[i]);
    }

    while (!queue.isEmpty())
    {
        if (verbose)
        {
            std::cout << queue.remove() << " " << std::flush;
        }
        else
        {
            queue.remove();
        }
    }
    if (verbose)
    {
        std::cout << std::endl;
    }
}

int main()
{
    bool verbose = false;

    std::cout << "Testing: Linked List" << std::endl;
    testRemove(verbose);
    testReverse(verbose);

    std::cout << "Testing: Stack" << std::endl;
    testStack(verbose);

    std::cout << "Testing: Queue" << std::endl;
    testQueue(verbose);
}