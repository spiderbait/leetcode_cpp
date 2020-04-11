#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return l1;
    }

    ListNode* arrayToList(int *nums) {
    ListNode *p;
    
    int arrayLen = sizeof(nums)/sizeof(nums[0]);
    cout << arrayLen << endl;
    for (int i = 0; i < arrayLen; i++) {
        cout << nums[i] << endl;
    }
    
    return p;
    }
};



int main() {
    int nums[] = {1, 3, 4, 6, 9};
    Solution s;
    s.arrayToList(nums);
}