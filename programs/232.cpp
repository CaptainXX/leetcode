#include <stack>
using std::stack;
class MyQueue {
private:
    int* stack;
    int len;
    int cnt;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        this->cnt = -1;
        this->len = 100;
        this->stack = new int[len];
    }
    
    /** Push element x to the back of queue. */
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
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int tmp = this->stack[0];
        this->stack++;
        cnt--;
        return tmp;
    }
    
    /** Get the front element. */
    int peek() {
        return this->stack[0];
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return cnt == -1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */