#include "main.h"
#include "141.h"
// memory used is O(1)
// fast pointer && slow pointer
bool hasCycle(ListNode *head){
    if(!head || !head->next)
	return 0;
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast){
	if (!fast){
	    return 0;
	}
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            return 1;
        }
    }
    return 0;
}
