//
// Created by captain on 18-10-3.
//
#include <string>
using std::string;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int p1 = 0;
        int p2 = 0;
        int len_p1 = haystack.size();
        int len_p2 = needle.size();
        if (len_p2 == 0)
            return 0;
        if (len_p1 == 0)
            return -1;
        while (p1 < len_p1) {
            if (haystack[p1] == needle[p2]) {
                if (p2 == len_p2 - 1)
                    return p1 - len_p2 + 1;
                p1++;
                p2++;
                continue;
            }

            p1 = p1 - p2 + 1;
            p2 = 0;
        }
        return -1;
    }
};
