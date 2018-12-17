//
// Created by captain on 18-10-3.
//
#include <vector>
using std::vector;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 多提交了一次，执行时间从8ms提升到了4ms...玄学
        if (nums.size() == 0) // 不用nums.empty()方法，速度快了一倍
            return 0;
        int num = 0;
        for ( int i : nums) {
            if (i == val)
                continue;
            nums[num] = i;
            num++;
        }
        return num;
    }
};
