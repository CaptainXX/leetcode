//
// Created by captain on 18-10-1.
//
#include <vector>
using std::vector;
class Solution {
public:
    bool isPalindrome(int x) {
        /*if (x < 0)
            return false;
            */
        if (x < 0 || ( x != 0 && x % 10 == 0 )) // 增加结尾判断后速度快了一倍....
            return false;
        vector<int> new_x;
        while (x != 0) {
            int tail = x%10;
            new_x.push_back(tail);
            x /= 10;
        }
        for (int i = 0; i < new_x.size(); i++) {
            if (new_x[i] != new_x[new_x.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
