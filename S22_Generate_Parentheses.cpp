#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, n, "", result);
        return result;
    }

    void generate(int left, int right, string s, vector<string> &result) {
        // cout << "left: " << left << ", right: " << right << endl;
        if(left == 0 && right == 0) {
            result.push_back(s);
            return;
        }
        if(left > 0) {
            generate(left - 1, right, s + "(", result);
        }
        if(left < right) {
            generate(left, right - 1, s + ")", result);
        }
    }

    void print(vector<string> result) {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result.at(i) << endl;
        }
        
    }
};

int main() {

    Solution s;
    s.print(s.generateParenthesis(4));

    return 0;
}