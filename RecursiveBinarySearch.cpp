#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    std::vector<int> sortedList = list;

    int mid = sortedList.size() / 2;
    int index = sortedList[mid];
    bool valueFound = false;

    while (valueFound == false) {

        if (index == target) {
            std::cout << index << std::endl;
            valueFound = true;
        }

        else if (sortedList.at(index - 1) < index && target < index) {
            index--;
        }

        else if (sortedList.at(index + 1) > index && target > index) {
            index++;
        }
    }
    return true;
}
