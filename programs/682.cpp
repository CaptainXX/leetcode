#include <vector>
#include <sstream>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& ops) {
        if (ops.size() == 0) {
            return 0;
        }
        if (ops.size() == 1) {
            stringstream strm;
            strm << ops[0];
            int out;
            strm >> out;
            return out;
        }
        stack<int> score;
        int i = 0;
        for (; i < ops.size(); i++) {
            if (ops[i] == "+") {
                int prvScore = score.top();
                score.pop();
                int prvprvScore = score.top();
                score.push(prvScore);
                score.push(prvprvScore + prvScore);
            }
            else if (ops[i] == "D") {
                score.push(score.top() * 2);                
            }
            else if (ops[i] == "C") {
                score.pop();
            }
            else {
                stringstream strm;
                strm << ops[i];
                int nScore;
                strm >> nScore;
                score.push(nScore);
            }
        }
        int sum = 0;
        while(!score.empty()) {
            sum += score.top();
            score.pop();
        }
        return sum;
    }
};