// https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; 
        std::vector<int> result;
    
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
    
            if (numMap.find(complement) != numMap.end()) {
                result.push_back(numMap[complement]);
                result.push_back(i);
                return result;
            } 
    
            numMap[nums[i]] = i;
        }
    
        return result; 
    }
};
