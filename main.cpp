#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> list;
    BubbleSort bs;
    QuickSort qs;
    RecursiveBinarySearch rbs;

    while(!std::cin.fail()) {
        int input;
        std::cin >> input;
        list.push_back(input);
    }

    std::cout << "Bubble Sort: " << std::endl;

}
