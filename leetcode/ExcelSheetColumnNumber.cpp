// https://leetcode.com/problems/excel-sheet-column-number/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        unordered_map<char, int> alphaNum;
        int ans = 0;
        int i = 1;
        for(char c = 'A'; c<= 'Z'; c++) {
            alphaNum[c] = i;
            i++;
        }

        for (char c: columnTitle) {
            ans *= 26;
            ans += alphaNum[c];
        }
        return ans;



        
    }
};
