#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]>=target) {
                return i;
            }
        }
        return nums.size();
    }
};

int main() {
    int arrNums[] = {1, 3, 5, 6};
    vector<int> nums(arrNums, arrNums+sizeof(arrNums)/sizeof(int));
    int n = 7;
    Solution s;
    int result = s.searchInsert(nums, n);
    cout << result;

    return 0;
}