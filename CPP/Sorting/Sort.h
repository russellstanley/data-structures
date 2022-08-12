#include <iostream>
#include <vector>

#pragma once

class Sort
{
public:
    Sort();

    std::vector<int> bubble(std::vector<int> array);
    std::vector<int> merge(std::vector<int> array);

    void display(std::vector<int> array);

    ~Sort();
};
