#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p = head;

        if (p == NULL) {
            return p;
        }
        
        while(p != NULL && p->next != NULL) {
            if (p->val == p->next->val) {
                ListNode *q = p->next;
                p->next = q->next;
                delete q;
            } else { 
                p = p->next;
            }
        }
        return head;
    }

    ListNode* arrayToLinkedList(int arr[]) {
        ListNode *head = new ListNode();
        ListNode *p = head;
        for (int n: arr) {
            p->next = new ListNode(n);
            p = p->next;
        }
        
        return head;
    }
};

int main() {
    Solution s;
    int n[] = {1, 2, 3};
    s.arrayToLinkedList(n);
}