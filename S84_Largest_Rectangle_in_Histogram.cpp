#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int largestArea = 0;
        int largestHeight = 0;

        for (int i = 0; i < heights.size(); i++) {
            if (heights.at(i) > largestHeight) {
                largestHeight = heights.at(i);
            }
        }

        for (int h = 1; h <= largestHeight; h++) {
            int area = 0;
            for (int i = 0; i < heights.size(); i++) {
                if (heights.at(i) >= h) {
                    area += h;
                } else {
                    // cout << "current heights is " << h << ", current area is " << area << endl;
                    if (area > largestArea) {
                        largestArea = area;
                    }
                    area = 0;
                }
            }
            if (area > largestArea) {
                largestArea = area;
            }
            // cout << "current heights is " << h << ", current area is " << area << endl;
        }

        return largestArea;
    }
};

int main() {
    // int arr[] = {2, 1, 5, 6, 2, 3};
    int arr[] = {0,0,0,0,0,0,0,0,2147483647};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    vector<int> heights(arr, arr + arrLen);
    Solution *s = new Solution();
    cout << s->largestRectangleArea(heights) << endl;

    return 0;
}