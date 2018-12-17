#include <iostream>
#include "./includes/141.h"
#include "./includes/main.h"
using namespace std;

int main()
{
    Solution s;
    ListNode* head;
    head = generate();
    show(head);
    cout << s.hasCycle(head);
    cout << "???";
    return 0;
}
