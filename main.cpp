#include "BubbleSort.h"
#include "QuickSort.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> list {1,7,4,2,8,9,3,6,5,4};

    BubbleSort bs;
    std::cout << "Unsorted list (BubbleSort): ";
    for (int i = 0; i < list.size(); i++) {
        std::cout << list[i] << " ";
    }

    std::vector<int> sortedList = bs.sort(list);

    std::cout << "\nSorted list (BubbleSort): ";
    for (int i = 0; i < sortedList.size(); i++) {
        std::cout << sortedList[i] << " ";
    }

    /* QuickSort qs;
    std::cout << "\nSorted list (QuickSort): ";
    std::vector<int> QuickSortedList = qs.sort(list);

    for (int i = 0; i < QuickSortedList.size(); i++) {
        std::cout << QuickSortedList[i] << " ";
    } */
}