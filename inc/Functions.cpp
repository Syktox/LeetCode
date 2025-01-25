#include "../inc/Functions.h"
#include <iostream>
#include <vector>

void Solutions::test() {
    std::cout << "Hallo" << std::endl;
}

std::vector<int> Solutions::plusOne(std::vector<int>& digits) {
    bool carryover = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((digits.at(i) + 1) % 10 == 0) {
            digits.at(i) = 0;
            carryover = true;
        } else {
            digits.at(i)++;
            return digits;
        }
    }
    if (carryover == true) {
        digits.insert(digits.begin(), 1);
    }

    return digits;
}