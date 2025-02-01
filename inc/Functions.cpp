#include "../inc/Functions.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>

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
    if (x <= pow(-2,31) || x > pow(2, 31) - 1) {
        return 0;
    }

    bool wasNeg = false;
    int sum = 0;

    if (x < 0) {
        x = x * (-1);
        wasNeg = true;
    }
    
    while (x > 0) {
        if ((sum + (x % 10) * pow(10, std::to_string(x).length() - 1)) > pow(2,31) - 1) {
            return 0;
        }
        std::cout << "X: " << x << " Sum: " << sum << std::endl;
        sum += (x % 10) * pow(10, std::to_string(x).length() - 1);
        x = x / 10;
    }

    if (wasNeg) {
        return sum * (-1);
    }

    return sum;
}

int Solutions::lengthOfLongestSubstring(std::string s) {
    if (s.empty()) {
        return 0;
    }

    std::set<char> set;
    int start = 0;
    int end = 0;
    int max = 0;
    int count = 0;

    while (end < s.size()) {
        if (set.count(s[end]) == 0) {
            set.insert(s[end]);
            max = std::max(max, end - start + 1);
            end++;
        } else {
            set.erase(s[start]);
            start++;
        }
    }

    return max;
}

std::vector<int> Solutions::twoSum(std::vector<int>& nums, int target) { // very slow
    std::vector<int> indices;

    for (int i = 0; i <= nums.size(); i++) {
        for (int j = i + 1; j <= nums.size(); j++) {
            if (nums.at(i) + nums.at(j) == target) {
                indices.emplace_back(i);
                indices.emplace_back(j);
                return indices;
            }
        }
    }
    
    return indices;
}

int Solutions::maxArea(std::vector<int>& height) {
    int maxSum = 0;
    int area = 0;
    int i = height.size() - 1;

    int* left = &height[0];
    int* right = &height[height.size() - 1];

    while (left != right) {
        if (*left < *right) {
            area = std::min(*left, *right) * (right - left);
            left++;
        } else {
            area = std::min(*left, *right) * (right - left);
            right--;
        }
        if (area > maxSum) {
            maxSum = area;
        }

        i--;
    }

    return maxSum;
}

std::vector<std::vector<int>> Solutions::threeSum(std::vector<int>& nums) {
        

    return test;
}
