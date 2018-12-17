#include <iostream>
class MinStack {
private:
    int *stack;
    
    int len;
    int cnt;
public:
    /** initialize your data structure here. */
    MinStack() {
        this->cnt = -1;
        this->len = 10;
        this->stack = new int[len];
    }
    
    void push(int x) {
        // check full
        if (cnt == len - 1) {
            len = len * 2;
            int *nStack = new int [len];
            // copy items
            for (int i = 0; i <= cnt; i++) {
                nStack[i] = this->stack[i];
            }
            int *tmp = this->stack;
            delete []tmp;
            this->stack = nStack;
        }
        cnt++;
        this->stack[cnt] = x;
    }
    
    void pop() {
        cnt--;
    }
    
    int top() {
        return this->stack[cnt];
    }
    
    int getMin() {
        int min = this->stack[0];
        for (int i = 1; i <= cnt; i++) {
            min = this->stack[i] < min ? this->stack[i] : min;
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */