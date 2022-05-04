#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> list {1,7,4,2,8,9,3,6,5,4};

    BubbleSort bs;
    std::cout << "Unsorted list: ";
    for (long unsigned int i = 0; i < list.size(); i++) {
        std::cout << list[i] << " ";
    }

    std::vector<int> sortedList = bs.sort(list);

    std::cout << "\nSorted list (BS): ";
    for (long unsigned int i = 0; i < sortedList.size(); i++) {
        std::cout << sortedList[i] << " ";
    }

    QuickSort qs;
    std::cout << "\nSorted list (QS): ";
    std::vector<int> QuickSortedList = qs.sort(list);

    for (int i = 0; i < QuickSortedList.size(); i++) {
        std::cout << QuickSortedList[i] << " ";
    }

    // We will use the qs sorted list to test the recursive binary search
    std::cout << "\n\nRecursive Binary Search" << std::endl;
    RecursiveBinarySearch rbs;
    std::cout << "Number found at index: " << rbs.search(QuickSortedList, 8) << std::endl;
}