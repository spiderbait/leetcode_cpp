#include <iostream>
#include <vector>
#include <functional>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA;
        ListNode *q = headB;
        while (p != q)
        {
            if(p == NULL) {
                p = headB;
            } else {
                p = p->next;
            }
            if (q == NULL) {
                q = headA;
            } else {
                q = q->next;
            }
        }
        return p;
    }

    template <class T>
    ListNode* arrayToList(T &list) {
        ListNode* dummyRoot = new ListNode(0);
        ListNode* ptr = dummyRoot;
        int arrayLen = sizeof(list)/sizeof(list[0]);
        for(int i = 0; i < arrayLen; i++) {
            ptr->next = new ListNode(list[i]);
            ptr = ptr->next;
        }
        ptr = dummyRoot->next;
        delete dummyRoot;
        return ptr;
    }

    void printLinkList(ListNode* head) {
        ListNode *p = head;
        while(p != NULL) {
            cout << p->val << endl;
            p = p->next;
        }
    }
};

int main() {
    Solution s;

    int headA[] = {2,6,4};
    int headB[] = {1,5};

    // s.printLinkList(s.arrayToList(headA));
    cout << s.getIntersectionNode(s.arrayToList(headA), s.arrayToList(headB))->val << endl;
}