#include <iostream>
#include "./programs/155.cpp"
#include "./includes/main.h"
using namespace std;

int main()
{
    MinStack s;
    for (int i = 0; i < 12; i++) {
        s.push(i);
    }
    cout << s.top() << endl;
    s.pop();
    cout << s.getMin() << endl;
    s.push(-1);
    cout << s.getMin() << endl;
    return 0;
}
