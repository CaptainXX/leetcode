#include <string>
#include <stack>
using std::string;
using std::stack;
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> Sstack, Tstack;
        size_t TLen = T.size(), SLen = S.size();
        size_t len = TLen < SLen ? TLen : SLen;
        size_t i = 0;
        for (; i < len; i++) {
            if (S[i] == '#'){
                if (!Sstack.empty())
                    Sstack.pop();
            }
            else {
                Sstack.push(S[i]);
            }
            if (T[i] == '#'){
                if (!Tstack.empty())
                    Tstack.pop();
            }
            else {
                Tstack.push(T[i]);
            }

        }
        while (i < TLen) {
            if (T[i] == '#'){
                if (!Tstack.empty())
                    Tstack.pop();
            }
            else {
                Tstack.push(T[i]);
            }
            i++;
        }
        while (i < SLen) {
            if (S[i] == '#'){
                if (!Sstack.empty())
                    Sstack.pop();
            }
            else {
                Sstack.push(S[i]);
            }
            i++;
        }
        if (Sstack.size() != Tstack.size()) {
            return 0;
        }
        while (!Tstack.empty()) {
            if (Tstack.top() != Sstack.top())
                return 0;
            Tstack.pop();
            Sstack.pop();
        }
        return 1;
    }
};
