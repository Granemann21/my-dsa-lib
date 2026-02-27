#ifndef SORTING_HPP
#define SORTING_HPP

#include <vector>

template <typename T>
void insertion_sort(std::vector<T> &a)
{
    for (size_t j = 1; j < a.size(); j++)
    {
        T key = a[j];
        int i = static_cast<int>(j) - 1;

        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }

        a[i + 1] = key;
    }
}

#endif
