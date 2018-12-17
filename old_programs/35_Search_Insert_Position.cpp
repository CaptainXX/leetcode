//
// Created by captain on 18-10-4.
//
#include <vector>
using std::vector;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { // 顺序遍历查找...下意识用了时间复杂度最差的算法
        int size = nums.size();
        if (size == 0) {
            nums[0] = target;
            return 0;
        }
        for (int i = 0; i < size; i++) {
            if (nums[i] >= target) {
                return i;
            }
        }
        return size;
    }
};

