#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> result = this->initVector(S.size() + 1);
        for (int i = 0; i < S.size(); i++)
        {
            if(S.at(i) == 'D' && result[i] < result[i + 1]) {
                swap(result[i], result[i + 1]);
            }
        }
        return result;
    }

    vector<int> initVector(int n) {
        vector<int> result;
        for(int i = 0; i < n; i++) {
            result.push_back(i);
        }
        return result;
    }
};

int main() {
    string S = "DDI";
    Solution s;
    vector<int> r = s.diStringMatch(S);

    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << " ";
    } 
    cout << endl;
}