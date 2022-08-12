#include "Sort.h"

Sort::Sort() {}

// Bubble sort
std::vector<int> Sort::bubble(std::vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.size() - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}

std::vector<int> Sort::merge(std::vector<int> array)
{
    std::size_t midpoint = array.size() / 2;

    std::vector<int> left(array.begin(), array.begin() + midpoint);
    std::vector<int> right(array.begin() + midpoint, array.end());

    if (array.size() == 1)
    {
        return array;
    }

    display(left);
    return merge(left);
}

// Print a given vector
void Sort::display(std::vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i] << " " << std::flush;
    }
    std::cout << std::endl;
    return;
}

Sort::~Sort() {}