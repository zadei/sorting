#include "QuickSort.h"
#include <iostream>
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    std::vector<int> sortedList = list; 

    if (sortedList.size() > 3) {
    int pivot = sortedList[2];
    }
    if (sortedList.size() <= 2) {
        if (sortedList[0] > sortedList[1]) {
            int temp = sortedList[0];
            sortedList[0] = sortedList[1];
            sortedList[1] = temp;
        }
        return sortedList;
    }
    if (sortedList.size() == 3) {
        if (sortedList[0] > sortedList[1]) {
            int temp = sortedList[0];
            sortedList[0] = sortedList[1];
            sortedList[1] = temp;
        }
        if (sortedList[1] > sortedList[2]) {
            int temp = sortedList[1];
            sortedList[1] = sortedList[2];
            sortedList[2] = temp;
        }
        if (sortedList[0] > sortedList[1]) {
            int temp = sortedList[0];
            sortedList[0] = sortedList[1];
            sortedList[1] = temp;
        }
        return sortedList;
    }
    
    int pivot = sortedList[2];
    int left = 0;
    int right = sortedList.size() - 1;

        while (left < right) {
        while (sortedList[left] < pivot) {
            left++;
        }
        while (sortedList[right] > pivot) {
            right--;
        }
        if (left < right) {
            int temp = sortedList[left];
            sortedList[left] = sortedList[right];
            sortedList[right] = temp;
            }
        }
        

return sortedList;
}