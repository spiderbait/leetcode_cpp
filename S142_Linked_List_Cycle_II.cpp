#include <iostream>
#include <common.h>

using namespace std;

struct ListNode {
    int val; 
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;                         // dummy or not matters, eg. [1, 2], 0
        ListNode* fast = dummyHead;
        ListNode* slow = dummyHead;

        while (true) {
            if (fast == NULL || fast->next == NULL) {   // condition order matters
                return NULL;
            } else {
                fast = fast->next->next;
            }
            slow = slow->next;
            if(fast == slow) {
                break;
            }
        }
        fast = dummyHead;

        while (true) {
            fast = fast->next;
            slow = slow->next;
            if (fast == slow) {
                return fast;
            }
        }
        return NULL;
    }
};

ListNode* generateLinkList(int &array) {
    
}

int main() {
    cout << "ok";
}