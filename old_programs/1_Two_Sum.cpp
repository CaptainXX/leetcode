#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output (2);
        unsigned long t = target;
        int temp, i, j;
        unsigned long s = nums.size();
        for (i = 0; i < s - 1; i++) {
            for (j = i + 1; j < s; j++){
                temp = nums[i] + nums[j];
                if (temp == t) {
                    output[0] = i;
                    output[1] = j;
                    return output;
                }
            }
        }
        return output;
    }
};

int main() {
	vector<int> array {3, 2, 3};
	Solution pop;
	vector<int> out = pop.twoSum(array, 6);
	cout << out[0] << " " << out[1] << endl;

	return 0;
}
