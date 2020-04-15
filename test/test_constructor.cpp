#include <iostream>

using namespace std;

class Solution {
public:
    int val;
    
    Solution() {
        cout << "default constructor called" << endl;
    }

    Solution(int x): val(x) {
        cout << "custom constructor called, val = " << val << endl;
    }
    
    int printVal() {
        cout << "printVal called, val = " << val << endl;
        return 0;
    }
};

int main() {
    Solution *s = new Solution(5);
    Solution so;
    s->printVal();
    so.printVal();
    
    cout << s << endl;
    cout << &so << endl;
}