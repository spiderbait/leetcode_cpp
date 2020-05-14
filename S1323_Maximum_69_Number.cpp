#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int bit = 0;
        int n = num;
        int max = 0;
        while(n) {
            max += 9*pow(10, bit);
            bit ++;
            n /= 10;
        }

        return (int)pow(10, int(log10(max - num)))*3 + num;
    }
};

int main() {
    Solution s;
    cout << s.maximum69Number(9999) << endl;;
}

// Runtime Error Message:
// Line 14: Char 33: runtime error: -inf is outside the range of representable values of type 'int' (solution.cpp)
// Last executed input:
// 9999