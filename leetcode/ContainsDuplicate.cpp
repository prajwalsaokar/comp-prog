// https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> new_nums(nums.begin(), nums.end());
        if (new_nums.size() == nums.size()) {
            return false;
        }
        else {
            return true;
        }
    }
};
