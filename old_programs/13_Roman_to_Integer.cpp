//
// Created by captain on 18-10-1.
//
#include <vector>
#include <string>
using std::string;
using std::vector;
class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            switch(s[i]){
                case 'I':
                    if (s[i + 1] == 'V') {
                        count += 4;
                        i++;
                    }
                    else if (s[i + 1] == 'X') {
                        count += 9;
                        i++;
                    } else {
                        count +=1;
                    }
                    break;
                case 'V':
                    count += 5;
                    break;
                case 'X':
                    if (s[i + 1] == 'L') {
                        count += 40;
                        i++;
                    } else if (s[i + 1] == 'C') {
                        count += 90;
                        i++;
                    } else {
                        count += 10;
                    }
                    break;
                case 'L':
                    count += 50;
                    break;
                case 'C':
                    if (s[i + 1] == 'D') {
                        count += 400;
                        i++;
                    } else if (s[i + 1] == 'M') {
                        count += 900;
                        i++;
                    } else {
                        count += 100;
                    }
                    break;
                case 'D':
                    count += 500;
                    break;
                case 'M':
                    count += 1000;
                    break;
                default:
                    return 0;
            }
        }
        return count;
    }
};
