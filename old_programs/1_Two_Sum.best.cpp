#include <vector>
#include <iostream>
#include <unordered_map>
using std::vector;
using std::unordered_map;
/*static const auto io_sync_off = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> meeted_nums;
            vector<int> ret;
            for(int i=0; i<nums.size(); i++){
                int new_num = nums[i];
                if(meeted_nums.count(target-new_num)){ // unordered_map.count() 在表中寻找(target-new_num),找到了返回1,没找到返回0
                    ret.push_back(meeted_nums[target-new_num]);
                    ret.push_back(i);
                    break;
                }
                else{
                    meeted_nums[new_num] = i;
                }
            }
            return ret; 
    }
};
