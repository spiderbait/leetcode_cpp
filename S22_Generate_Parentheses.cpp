#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        char leftParenthes = '(';
        char rightParenthes = ')';
        int leftCount = n;
        int rightCount = n;
 
        cout << leftParenthes + rightParenthes << endl;

        return result;
    }
};

int main() {

    Solution s;
    s.generateParenthesis(3);

    return 0;
}