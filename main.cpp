#include <iostream>
#include "141.h"
#include "main.h"
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
