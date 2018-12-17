//
// Created by captain on 18-10-1.
//
#include <string>
#include <vector>
using std::string;
using std::vector;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        if(strs.size() == 1)
            return strs[0];
        string commonPrefix;
        for (int i = 0; i < strs[0].length(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs[0][i] != strs[j][i])
                    return commonPrefix;
            }
            commonPrefix += strs[0][i];
        }
        return commonPrefix;
    }
};

