// https://leetcode.com/problems/valid-palindrome/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(char c: s) {
            if(isalnum(c)) {
                p.push_back(tolower(c));
            }
        }
        auto r = p;
        reverse(p.begin(), p.end());

        if (p == r) {
            return true;
        }
        else {
            return false;
        }
    }
};
