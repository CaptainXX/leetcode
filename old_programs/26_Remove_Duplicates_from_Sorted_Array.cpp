//
// Created by captain on 18-10-3.
//
#include <vector>
#include <map>
using std::vector;
using std::map;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = int(nums.size());
        int temp, countSame;
        for ( int i = 0; i < len - 1; i++ ) {
            countSame = 0;
            temp = nums[i];
            for ( int j = i + 1; j < len; j++) {
                if ( temp != nums[j] ){
                    break;
                }
                countSame++;
            }
            if (i + countSame == len - 1) {
                nums.erase(nums.begin() + i + 1, nums.end());
                len = i + 1;
                return len;
            }
            nums.erase(nums.begin() + i + 1, nums.begin() + i + 1 + countSame);
            len -= countSame;
        }
        return len;
    }
};
