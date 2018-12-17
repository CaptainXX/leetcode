//
// Created by captain on 18-10-1.
//
#include <vector>
#include <iostream>
#include <cmath>
using std::vector;
class Solution {
public:
    long long reverse(int x) {
        int digit;
        vector<int> new_num;
        while (x != 0) {
            digit = x - x / 10 * 10;
            x = x / 10;
            new_num.push_back(digit);
        }
        long long output = 0;
        for (int i = 0; i < new_num.size(); i++) {
            output += pow(10, i) * new_num[new_num.size() - i - 1];
        }
        if (output > INT32_MAX || output < INT32_MIN) {
            return 0;
        }
        return output;
    }
};

