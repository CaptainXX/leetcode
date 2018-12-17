//
// Created by captain on 18-10-3.
//
// Definition for singly-linked list.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        auto head = new ListNode(0);
        auto new_list = head;
        ListNode* n1 = l1;
        ListNode* n2 = l2;

        while (n1 || n2) {
            if ( n1 == nullptr ) {
                new_list->next = n2;
                return head->next;
            }
            else if ( n2 == nullptr ) {
                new_list->next = n1;
                return head->next;
            }
            if ( n1->val < n2->val ) {
                new_list->next = new ListNode(0);
                new_list = new_list->next;
                new_list->val = n1->val;
                n1 = n1->next;
            }
            else if ( n1->val > n2->val ) {
                new_list->next = new ListNode(0);
                new_list = new_list->next;
                new_list->val = n2->val;
                n2 = n2->next;
            }
            else if ( n1->val == n2->val ) {
                new_list->next = new ListNode(0);
                new_list = new_list->next;
                new_list->val = n1->val;
                n1 = n1->next;
                new_list->next = new ListNode(0);
                new_list = new_list->next;
                new_list->val = n2->val;
                n2 = n2->next;
            }

        }
        return head->next;
    }
};


