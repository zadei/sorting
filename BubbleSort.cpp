#include "BubbleSort.h"
#include <iostream>
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    std::vector<int> sortedList = list;
    for (long unsigned int i = 0; i < sortedList.size(); i++) {
        for (long unsigned int j = 0; j < sortedList.size() - 1; j++) {
            if (sortedList[j] > sortedList[j + 1]) {
                int temp = sortedList[j];
                sortedList[j] = sortedList[j + 1];
                sortedList[j + 1] = temp;
            }
        }
    }
return sortedList;
}