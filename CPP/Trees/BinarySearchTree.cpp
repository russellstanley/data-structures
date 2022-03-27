#include "BinarySearchTree.h"

/* TODO
1. Add a delete operation
*/

// Create an empty BST.
BinarySearchTree::BinarySearchTree()
{
    root = nullptr;
}

// Create a BST with default value
BinarySearchTree::BinarySearchTree(int v)
{
    root = new Node(v);
}

// Insert a value into the BST.
void BinarySearchTree::insert(Node *current, int value)
{
    if (isEmpty())
    {
        root = new Node(value);
        return;
    }
    if (value < current->value)
    {
        if (current->left == nullptr)
        {
            current->left = new Node(value);
            return;
        }
        else
        {
            insert(current->left, value);
        }
    }
    if (value > current->value)
    {
        if (current->right == nullptr)
        {
            current->right = new Node(value);
            return;
        }
        else
        {
            insert(current->right, value);
        }
    }
    return;
}

// Display the BST in-order.
void BinarySearchTree::display(Node *current)
{
    if (current->left != nullptr)
    {
        display(current->left);
    }

    std::cout << current->value << " " << std::endl;

    if (current->right != nullptr)
    {
        display(current->right);
    }
}

Node *BinarySearchTree::getRoot()
{
    return root;
}

bool BinarySearchTree::isEmpty()
{
    return root == nullptr;
}

BinarySearchTree::~BinarySearchTree()
{
}