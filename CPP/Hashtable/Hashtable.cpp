/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Hashtable implementation
*/

#include "Hashtable.h"

Hashtable::Hashtable()
{
    for (int i = 0; i < CAPACITY; i++)
    {
        std::list<Node> list;
        table[i] = list;
    }
}

int Hashtable::hash(std::string key)
{
    int index = 0;
    for (int i = 0; i < key.length(); i++)
    {
        index += key[i];
    }
    return index % CAPACITY;
}

bool Hashtable::put(std::string key, int value)
{
    Node node(key, value);
    int index = hash(key);
    std::list<Node>::iterator it;
    for (it = table[index].begin(); it != table[index].end(); it++)
    {
        // Update value if key already exists.
        if ((*it).key == key)
        {
            (*it).value = value;
            return true;
        }
    }
    table[index].push_back(node);
    return true;
}

int Hashtable::get(std::string key)
{
    int index = hash(key);
    std::list<Node>::iterator it;
    for (it = table[index].begin(); it != table[index].end(); it++)
    {
        if ((*it).key == key)
        {
            return (*it).value;
        }
    }
    return 0; // No matching value found.
}

bool Hashtable::remove(std::string key)
{
    int index = hash(key);
    std::list<Node>::iterator it;
    for (it = table[index].begin(); it != table[index].end(); it++)
    {
        if ((*it).key == key)
        {
            table[index].erase(it);
            return true;
        }
    }
    return false; // No matching value found.
}

void Hashtable::pretty()
{
    for (int i = 0; i < CAPACITY; i++)
    {
        if (table[i].size() != 0)
        {
            std::list<Node>::iterator it;
            for (it = table[i].begin(); it != table[i].end(); it++)
            {
                std::cout << ">>(" << (*it).key << ", " << (*it).value << ")" << std::flush;
            }
            std::cout << std::endl;
        }
    }
}