#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();

        
    }

    void test() {
        int n = 4;
        bool rowSwitch = true;
        int p = 0;
        int x = 0, y = 0;
        char direction = 'S';
        int span = n;
        int dCount = 0; 

        for (int i = 0; i < span; i++) {
                cout << y << ", " << x << endl;
                x += 1;
                p ++;
            }
            x -= 1;
            y += 1;
            span -= 1;

        while(p < n * n) {
            if(dCount == 2) {
                dCount = 0;
                span --;
            }
            switch(direction) {
                case 'E':
                    // cout << 'E' << endl;
                    for (int i = 0; i < span; i++) {
                        cout << y << ", " << x << endl;
                        x += 1;
                        p ++;
                    }
                    x -= 1;
                    y += 1;
                    direction = 'S';
                    break;
                case 'S':
                    // cout << 'S' << endl;
                    for (int i = 0; i < span; i++) {
                        cout << y << ", " << x << endl;
                        y += 1;
                        p ++;
                    }
                    y -= 1;
                    x -= 1;
                    direction = 'W';
                    break;
                case 'W':
                    // cout << 'W' << endl;
                    for (int i = 0; i < span; i++) {
                        cout << y << ", " << x << endl;
                        x -= 1;
                        p ++;
                    }
                    x += 1;
                    y -= 1;
                    direction = 'N';
                    break;
                case 'N':
                    // cout << 'N' << endl;
                    for (int i = 0; i < span; i++) {
                        cout << y << ", " << x << endl;
                        y -= 1;
                        p ++;
                    }
                    y += 1;
                    x += 1;
                    direction = 'E';
                    break;
            }
            dCount += 1;
        }
        
        
        
    }
};

int main() {
    Solution s;
    s.test();
}