// https://leetcode.com/problems/valid-anagram/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> first(s.begin(), s.end());
        sort(first.begin(), first.end());
        vector<char> second(t.begin(), t.end());
        sort(second.begin(), second.end());

        if(first == second) {
            return true;
        }
        else {
            return false;
        }

    }
};
