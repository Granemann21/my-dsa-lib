#include <iostream>
#include <vector>
#include "../include/sorting.hpp"

int main()
{

    std::vector<int> numbers = {5, 2, 4, 6, 1, 3};

    insertion_sort(numbers);

    std::cout << "Ordered vector: ";
    for (int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}