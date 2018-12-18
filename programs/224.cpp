#include <stack>
#include <string>
using std::string;
using std::stack;
static const auto __ = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int calculate(string s) {
        stack<char> sign;
        stack<unsigned int> num;
        /* s includes ( ) + - [1-9] space */
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == ' ')
                continue;
            else if (s[i] == '(') {
                sign.push(s[i]);
            }
            else if (s[i] == '+' || s[i] == '-') {
                if (sign.empty()) {
                    sign.push(s[i]);
                    continue;
                }
                else if (sign.top() == '(') {
                    sign.push(s[i]);
                    continue;
                }
                if (sign.top() == '+') {
                    unsigned int a = num.top();
                    num.pop();
                    unsigned int b = num.top();
                    num.pop();
                    a = a + b;
                    num.push(a);
                    sign.pop();
                    sign.push(s[i]);
                }
                else if (sign.top() == '-') {
                    unsigned int a = num.top();
                    num.pop();
                    unsigned int b = num.top();
                    num.pop();
                    a = b - a;
                    num.push(a);
                    sign.pop();
                    sign.push(s[i]);
                }
            }
            else if (s[i] == ')') {
                while (sign.top() != '(') {
                    if (sign.top() == '+') {
                        unsigned int a = num.top();
                        num.pop();
                        unsigned int b = num.top();
                        num.pop();
                        a = a + b;
                        num.push(a);
                        sign.pop();
                    }
                    else if (sign.top() == '-') {
                        unsigned int a = num.top();
                        num.pop();
                        unsigned int b = num.top();
                        num.pop();
                        a = b - a;
                        num.push(a);
                        sign.pop();
                    }
                }
                sign.pop();
            }
            else {
                unsigned int number = s[i] - '0';
                size_t j = i + 1;
                while (s[j] && s[j] <= '9' && s[j] >= '0') {
                    number = number * 10 + s[j] - '0';
                    j++;
                    i++;
                }
                num.push(number);
            }
        }
        while (!sign.empty()) {
            if (sign.top() == '+') {
                unsigned int a = num.top();
                num.pop();
                unsigned int b = num.top();
                num.pop();
                a = a + b;
                num.push(a);
                sign.pop();
            }
            else if (sign.top() == '-') {
                unsigned int a = num.top();
                num.pop();
                unsigned int b = num.top();
                num.pop();
                a = b - a;
                num.push(a);
                sign.pop();
            }
        }
        return num.top();
    }
};
