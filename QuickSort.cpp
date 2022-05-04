#include "QuickSort.h"
#include <iostream>
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    std::vector<int> sortedList = list;

    if (list.size() > 1)
    {
        int pivot = list[0];
        std::vector<int> less;
        std::vector<int> greater;

        for (long unsigned int i = 1; i < list.size(); i++)
        {
            if (list[i] <= pivot)
            {
                less.push_back(list[i]);
            }
            else
            {
                greater.push_back(list[i]);
            }
        }

        std::vector<int> sortedLess = sort(less);
        std::vector<int> sortedGreater = sort(greater);

        sortedList.clear();
        sortedList.insert(sortedList.end(), sortedLess.begin(), sortedLess.end());
        sortedList.push_back(pivot);
        sortedList.insert(sortedList.end(), sortedGreater.begin(), sortedGreater.end());
    }

    return sortedList;
}