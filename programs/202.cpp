#include "202.h"

ListNode* Solution::reverseList(ListNode *head){
    ListNode *nHead = head, *rHead = new ListNode(0), *tmp = NULL;
    tmp = nHead;
    nHead = nHead->next;
    rHead->next = tmp;
    tmp->next = NULL;

    while (nHead) {
        tmp = nHead;
        nHead = nHead->next;
        tmp->next = rHead->next;
        rHead->next = tmp;
    }

    return rHead->next;
}

ListNode* Solution::generate(){
    ListNode* head = new ListNode(0), *rHead = head;
    head->next = NULL;
    int i = 0;
    while (i < 5) {
        head->val = i;
        head->next = new ListNode(0);
        head = head->next;
        head->next = NULL;
        i++;
    }
    return rHead;
}


void Solution::show(ListNode* head){
    ListNode* nHead = head;
    while(nHead){
        cout << nHead->val << '\t';
        nHead = nHead->next;
    }
    cout << endl;
}
