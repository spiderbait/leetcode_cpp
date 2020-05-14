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

        int m = max - num;
        int bit_m = 0;
        while(m) {
            bit_m ++;
            m /= 10;
        }
        return (int)pow(10, bit_m-1)*3 + num;
        // return (int)pow(10, int(log10(max - num)))*3 + num;
    }
};



int main() {
    Solution s;
    cout << s.maximum69Number(9) << endl;;
}

// TODO: if return in log form, then throw runtime error like below:
// Runtime Error Message:
// Line 14: Char 33: runtime error: -inf is outside the range of representable values of type 'int' (solution.cpp)
// Last executed input:
// 9999