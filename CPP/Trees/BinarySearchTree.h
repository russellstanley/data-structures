#include <iostream>
#include "Node.h"
#pragma once

class BinarySearchTree
{
private:
    Node *root;

public:
    BinarySearchTree();
    BinarySearchTree(int value);

    void insert(Node *current, int value);
    void remove(Node *current, int value);
    void display(Node *current);

    bool isEmpty();
    Node *getRoot();

    ~BinarySearchTree();
};