#include "../inc/Functions.h"
#include <iostream>
#include <vector>
#include <cmath>

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

int Solutions::reverse(int x) {
    if (x < pow(-2,31) || x > pow(2, 31) - 1) {
        return 0;
    }

    bool wasNeg = false;
    int sum = 0;

    if (x < 0) {
        x = x * (-1);
        wasNeg = true;
    }

    while (x > 0) {
        if (((x % 10) * pow(10, std::to_string(x).length() - 1)) > pow(2,31) - 1) {
            return 0;
        }
        sum += (x % 10) * pow(10, std::to_string(x).length() - 1);
        x = x / 10;
    }

    if (sum > pow(2, 31)) {
        return 0;
    }
    
    if (wasNeg) {
        return sum * (-1);
    }
            
    return sum;
}
