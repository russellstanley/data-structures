#include "BinarySearchTree.h"

void testBST()
{
    BinarySearchTree emptyTree;
    if (emptyTree.isEmpty() != true)
    {
        std::cout << "Fatal: isEmpty is incorrect" << std::endl;
    }

    emptyTree.insert(emptyTree.getRoot(), 5);

    BinarySearchTree tree(5);

    tree.insert(tree.getRoot(), 3);
    tree.insert(tree.getRoot(), 4);
    tree.insert(tree.getRoot(), 2);

    tree.insert(tree.getRoot(), 8);
    tree.insert(tree.getRoot(), 6);
    tree.insert(tree.getRoot(), 10);

    return;
}

int main()
{
    std::cout << "Testing: Binary Search Tree" << std::endl;
    testBST();
    return 0;
}