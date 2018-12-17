#include "main.h"
#include "876.h"
ListNode* middleNode(ListNode* head) {
    /* scan twice! violent!!
    if (!head || !head->next) {
        return head;
    }
    ListNode* nHead = head;
    int len = 0;
    while (nHead) {
        len++;
        nHead = nHead->next;
    }
    nHead = head;
    len = len / 2;
    while (nHead && len) {
        nHead = nHead->next;
        len--;
    }
    return nHead;
    */

    // use fast and slow pointer, v(fast) = 2 * v(slow)
    // only scan once, while memory used is O(1)
    if (!head || !head->next) {
        return head;
    }
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}