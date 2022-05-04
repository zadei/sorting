#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> list;
    BubbleSort bs;
    QuickSort qs;
    //RecursiveBinarySearch rbs;
    std::string boolOne = "false";

    while(!std::cin.fail()) {
        int input;
        std::cin >> input;
        list.push_back(input);
    }
    list.pop_back();

    bs.sort(list);

    for (long unsigned int i = 0; i < list.size(); i++) {
        if (list.at(i) == 1) {
            boolOne =  "true";
        }
    }

    std::cout << boolOne << " ";
    for (long unsigned int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << " ";
    }



}
