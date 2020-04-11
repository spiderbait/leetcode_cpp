#include <iostream>
#include <vector>
#include <map>

using namespace std;

/* brute force */
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> result;
//         for(int i=0; i<nums.size(); i++) {
//             for(int j=i+1; j<nums.size(); j++) {
//                 if(nums[i]+nums[j] == target) {
//                     result.push_back(i);
//                     result.push_back(j);
//                 }
//             }
//         }
//         return result;
//     }
// };

/* two-for */
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> result;
//         map<int, int> kvMap;
//         for (int i = 0; i < nums.size(); i++) 
//         {
//             kvMap[nums[i]] = i;
//         }
        
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int subNum = target - nums[i];
//             if (kvMap.find(subNum) != kvMap.end() && kvMap[subNum] != i)
//             {
//                 result.push_back(i);
//                 result.push_back(kvMap[subNum]);
//                 break;
//             }

//         }
//         return result;
//     }
// };

/* one-for */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> kvMap;
        for (int i = 0; i < nums.size(); i++) 
        {
            int subNum = target - nums[i];
            if(kvMap.find(subNum) != kvMap.end()) {
                result.push_back(kvMap[subNum]);
                result.push_back(i);
                break;
            }
            kvMap[nums[i]] = i;
        }
        return result;
    }
};

void print(int x) {
    cout << x << endl;
}

int main() {
    int numArray[] = {2, 7, 11, 15};
    int target = 9;
    // int numArray[] = {3, 3};
    // int target = 6;

    vector<int> nums(numArray, numArray+sizeof(numArray)/sizeof(int));
    Solution s;

    vector<int> result = s.twoSum(nums, target);
    for_each(result.begin(), result.end(), print);

    return 0;
}