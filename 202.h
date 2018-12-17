#ifndef LIST_H
#define LIST_H

#include <iostream>
#define dataType int
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head);
    ListNode* generate();
    void show(ListNode* head);
};
#endif // LIST_H
