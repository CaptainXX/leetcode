#include "19.h"
#include "main.h"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n){
    if (!head){
        return nullptr;
    }
    else if (!head->next){
        return nullptr;
    }
    ListNode* pHead = head;
    ListNode* tmp = head;
    ListNode* nHead = head;
    while (nHead && n) {
        nHead = nHead->next;
        n--;
    }
    if (!nHead){
        return head->next;
    }
    nHead = nHead->next;
    pHead = pHead->next;
    while (nHead) {
        nHead = nHead->next;
        pHead = pHead->next;
        tmp = tmp->next;
    }
    tmp->next = pHead->next;
    pHead->next = nullptr;
    delete(pHead);
    return head;
}