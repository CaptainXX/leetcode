//
// Created by captain on 18-10-3.
//
#include <string>
using std::string;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0)
            return 0;
        for ( int i = 0; i < haystack.length(); i++ ) {
            if ( haystack[i] != needle[0] )
                continue;
            int j, k, pos = i;
            for ( j = 1, k = i + 1; j < needle.length(); j++, k++ ) {
                if ( haystack[k] != needle[j] )
                    break;
            }
            if ( j == needle.length() )
                return pos;
        }
        return -1;
    }
};
