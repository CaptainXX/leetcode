//
// Created by captain on 18-10-3.
//
#include <vector>
using std::vector;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        int num=1;
        // 用Num来装作自己是一个新的数组
        // 并且应题目要求，也不需要管后面的元素
        // 不用erase方法，速度会快很多...
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            nums[num]=nums[i];
            num++;
        }
        return num;
    }
};
