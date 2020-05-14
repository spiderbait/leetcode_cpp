#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    string convertToTitle(int n) {
        int start = 'A' - 1;
        int len = 0;
        vector<char> rs;
        string result;

        bool flag = false;
        while (n) {
            if(n%26 == 0) {
                rs.push_back('Z');
                flag = true;
            } else {
                if (flag) {
                    rs.push_back(char(start + n%26 - 1));
                    flag = false;
                } else {
                    rs.push_back(char(start + n%26));
                }
            }
            
            len ++;
            n /= 26;
        }

        for (int i = len-1; i >= 0; i--) {
            result += rs.at(i);
        }
        // result += '\0';

        return result;
    }

};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.convertToTitle(26) << endl;
    return 0;
}
