#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && slow != NULL) {
            if (fast->next != NULL) {
                fast = fast->next->next;
            } else {
                return NULL;
            }
            slow = slow->next;
            if(fast == slow) {
                return fast->next;
            }
        }
        return NULL;
    }
};