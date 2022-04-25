/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Hashtable header file
*/

#pragma once
#include <list>
#include "Node.h"

const int CAPACITY = 300;

class Hashtable
{
private:
    std::list<Node> table[CAPACITY];

public:
    Hashtable();

    int hash(std::string key);
    bool put(std::string key, int value);
    int get(std::string key);
    bool remove(std::string key);

    void pretty();
};