//
// Created by captain on 18-10-4.
//
#include <vector>
using std::vector;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { // 二分法
        int size = nums.size();
        if (size == 0 || nums[0] >= target) {
            return 0;
        } else if (size == 1) {
            return nums[0] >= target ? 0 : 1;
        } else if (nums.back() < target) {
            return size;
        }
        int start = 0, end = size, mid;
        while (start < end) {
            mid = (end - start) / 2 + start;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
                if (end <= start)
                    return end + 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
                if (end <= start)
                    return end;
            }
        }
    }
};

