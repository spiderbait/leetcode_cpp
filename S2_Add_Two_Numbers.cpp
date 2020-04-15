#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /* front insert */
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    //     ListNode *p1 = l1;
    //     ListNode *p2 = l2;
    //     ListNode *tail = (ListNode*)malloc(sizeof(ListNode));
    //     ListNode *p = tail;
    //     int v1;
    //     int v2;
    //     int sum = 0;
    //     bool carryFlag = false;

    //     while(p1 != NULL && p2 != NULL) {

    //         if(p1 == NULL) {
    //             v1 = 0;
    //         } else {
    //             v1 = p1->val;
    //         }
        
    //         if(p2 == NULL) {
    //             v2 = 0;
    //         } else {
    //             v2 = p2->val;
    //         }

    //         sum = v1 + v2;

    //         if(carryFlag) {
    //             sum += 1;
    //         }

    //         if(sum >= 10) {
    //             carryFlag = true;
    //             sum -= 10;
    //         } else {
    //             carryFlag = false;
    //         }

    //         p->val = sum;
    //         ListNode *n = (ListNode*)malloc(sizeof(ListNode));
    //         n->next = p;
    //         p = n;
            
    //         p1 = p1->next;
    //         p2 = p2->next;
    //     }

    //     return p;
    // }

    ListNode* addTwoNumbers(struct ListNode* l1, ListNode* l2) {
        
        struct ListNode *head = new ListNode(0);
        struct ListNode *p = head;
        int v1;
        int v2;
        int sum = 0;
        bool carryFlag = false;

        while(true) {

            if(l1 == NULL) {
                v1 = 0;
            } else {
                v1 = l1->val;
            }
        
            if(l2 == NULL) {
                v2 = 0;
            } else {
                v2 = l2->val;
            }

            sum = v1 + v2;

            if(carryFlag) {
                sum += 1;
            }

            if(sum >= 10) {
                carryFlag = true;
                sum -= 10;
            } else {
                carryFlag = false;
            }

            if(l1 != NULL) {
                l1 = l1->next;
            }
            
            if(l2 != NULL) {
                l2 = l2->next;
            }
            
            p->val = sum;
            
            if(l1 == NULL && l2 == NULL && carryFlag == false) {
                break;
            }

            if(carryFlag == true) {
                p->next = new ListNode(1);
            }else{
                p->next = new ListNode(0);
            }
            
            p = p->next;
        }

        return head;
    }

    template <class T>
    ListNode* arrayToList(T &nums) {
    ListNode *p = (ListNode*)malloc(sizeof(ListNode));
    ListNode *head = p;
    
    int arrayLen = sizeof(nums)/sizeof(nums[0]);
    
    for (int i = 0; i < arrayLen; i++) {
        p->val = nums[i];
        if (i == arrayLen - 1) {
            break;
        }
        p->next = (ListNode*)malloc(sizeof(ListNode));
        p = p->next;
    }
    
    return head;
    }

    int printLinkList(ListNode* list) {
        ListNode *p = list;
        while(p != NULL) {
            if (p->next == NULL) {
                cout << p->val << endl;
            } else {
                cout << p->val << " -> ";
            }
            p = p->next;
        }

        return 0;
    }

    int test() {
        ListNode *list = (ListNode*)malloc(sizeof(ListNode));
        // list->next = NULL;
        cout << list->val << endl;
        cout << list->next << endl;
        if(list->next == NULL) {
            cout << "is null" << endl;
        } else {
            cout << "is not null" << endl;
        }

        list = (ListNode*)malloc(sizeof(ListNode));
        list->val = 20;
        list->next = NULL;
        cout << list->val << endl;
        cout << list->next << endl;
        if(list->next == NULL) {
            cout << "is null" << endl;
        } else {
            cout << "is not null" << endl;
        }

        return 0;
    }
};

int main() {
    int arrayOne[] = {5};
    int arrayTwo[] = {5};
    Solution s;
    ListNode *l1 = s.arrayToList(arrayOne);
    ListNode *l2 = s.arrayToList(arrayTwo);

    s.printLinkList(l1);
    s.printLinkList(l2);

    ListNode *sum = s.addTwoNumbers(l1, l2);
    s.printLinkList(sum);
}