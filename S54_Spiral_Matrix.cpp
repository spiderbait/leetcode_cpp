#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    // }

    void test() {
        int n = 3;
        bool rowSwitch = true;
        int i = 0;
        int x = 0, y = 0;

        while(i < n * n) {
            if (rowSwitch) {
                for (int a = 0; a < count; a++)
                {
                    /* code */
                }
                rowSwitch = !rowSwitch;
            } else {
                
                rowSwitch = !rowSwitch;
            }
        }
        
    }
};

int main() {
    Solution s;
    s.test();
}