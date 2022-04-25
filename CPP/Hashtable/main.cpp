/*
AUTHOR:
  Russell Stanley <russell.tumby@gmail.com>

DESCRIPTION:
  Hashtable testing file
*/

#include "Hashtable.h"

void testHashtable()
{
    Hashtable hashtable;

    // Test put()
    hashtable.put("cats", 20);
    hashtable.put("chickens", 104);

    // Test put() with same key
    hashtable.put("dogs", 10);
    hashtable.put("dogs", 20);
    if (hashtable.get("dogs") != 20)
    {
        std::cout << "put() failed" << std::endl;
    }

    // Test collision handling
    hashtable.put("ab", 15);
    hashtable.put("ab", 16);
    hashtable.put("d_", 32);
    hashtable.put("ba", 25);
    if (hashtable.get("ba") != 25)
    {
        std::cout << "collision handling failed" << std::endl;
    }

    // Test remove
    hashtable.remove("dogs");
    hashtable.remove("ba");
    if (hashtable.get("dogs") != 0)
    {
        std::cout << "remove() failed" << std::endl;
    }

    // Test get where no value exists
    if (hashtable.get("none") != 0)
    {
        std::cout << "get() failed" << std::endl;
    }
}

int main()
{
    std::cout << "Testing: Hashtable" << std::endl;
    testHashtable();
    return 0;
}