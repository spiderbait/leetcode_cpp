#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        int start = 'A' - 1;
        vector<char> rs;
        string result;

        int quo = n / 26;
        int rem = n % 26;

        if (rem == 0) {
            rs.push_back('Z');
            quo -= 1;
            while(quo) {
                rem = quo % 26;
                quo = quo / 26;
                rs.push_back(char(start + rem));
            }    
        } else {
            while (rem) {
                rs.push_back(char(start + rem));
                rem = quo % 26;
                quo = quo / 26;
            }
        }
        
        for (int i = rs.size()-1; i >= 0; i--) {
            result += rs.at(i);
        }

        return result;
    }

        string convertToTitleNew(int n) {
        int start = 'A' - 1;
        vector<char> rs;
        string result;


        while(n) {
            int rem = n % 26;
            rs.push_back(char(start + rem));
            n = n/26;
        }
        
        for (int i = rs.size()-1; i >= 0; i--) {
            result += rs.at(i);
        }

        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution s;
    cout << s.convertToTitle(702) << endl;      // 25, 26, 52, 701, 16380, 16381 
    return 0;
}
