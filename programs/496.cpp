#include <vector>
#include <map>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> numStack;
        map<int, int> lagerMap;
        int i = 0;
        for (; i < nums.size(); i++) {
            if (numStack.empty() || numStack.top() > nums[i]) {
                numStack.push(nums[i]);
                continue;
            }
            while (!numStack.empty() && numStack.top() < nums[i]){
                lagerMap[numStack.top()] = nums[i];
                numStack.pop();
            }
            numStack.push(nums[i]);
        }
        vector<int> out;
        for (i = 0; i < findNums.size(); i++) {
            if (lagerMap.count(findNums[i])) {
                out.push_back(lagerMap[findNums[i]]);
                continue;
            }
            out.push_back(-1);
        }
        return out;
    }
};
