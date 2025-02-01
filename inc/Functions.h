#pragma once
#include <vector>
#include <string>

class Solutions {
public:
    std::vector<int> plusOne(std::vector<int>& digits); 
    int reverse(int x);
    int lengthOfLongestSubstring(std::string s);
    std::vector<int> twoSum(std::vector<int>& nums, int target);
};
