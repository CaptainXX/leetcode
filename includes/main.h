#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* reverseList(ListNode *head){
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

ListNode* generate(){
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


void show(ListNode* head){
    ListNode* nHead = head;
    while(nHead){
        cout << nHead->val << '\t';
        nHead = nHead->next;
    }
    cout << endl;
}

#endif // MAIN_H
