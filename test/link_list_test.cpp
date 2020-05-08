#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int v, ListNode* n): val(v), next(n) {};
    ListNode(int v): val(v), next(NULL) {};
};

int main() {
    ListNode *head = new ListNode(1, new ListNode(2));
    ListNode *dummyHead = new ListNode(-1);
    dummyHead->next = head;
    ListNode *p = head;

    while(p != NULL) {
        cout << p->val << "->";
        p = p->next;
    }

    p = head;

    while(p != NULL) {
        cout << p->val << "->";
        p = p->next;
    }
}