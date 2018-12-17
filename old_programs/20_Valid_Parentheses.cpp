//
// Created by captain on 18-10-1.
//
#include <string>
#include <vector>
#include <map>
using std::vector;
using std::string;
using std::map;
class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 1)
            return false;
        if (s[0] == ')' || s[0] == ']' || s[0] == '}')
            return false;
        vector<char> frontHalf;
        map<char, char> sign;
        sign['('] = ')';
        sign['['] = ']';
        sign['{'] = '}';
        int c1 = 0, c2 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
                char temp = frontHalf.back();
                frontHalf.pop_back();
                c2++;
                if (sign[temp] != s[i]) {
                    return false;
                }
                continue;
            }
            frontHalf.push_back(s[i]);
            c1++;
        }
        return c1==c2;
    }
};

