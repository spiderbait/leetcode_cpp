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
        bool isBorrow = false;

        while(quo != 0 || rem != 0) {
            if (rem == 0) {
                rs.push_back('Z');
                isBorrow = true;
            } else {
                rs.push_back(char(start + rem));
            }

            if (isBorrow) {
                quo -= 1;
                isBorrow = false;    
            }
            
            rem = quo % 26;
            quo = quo / 26;
        }
        
        for (int i = rs.size()-1; i >= 0; i--) {
            result += rs.at(i);
        }

        return result;
    }

};

int main(int argc, char const *argv[]) {
    Solution s;
    int a[] = {25, 26, 52, 701, 16380, 16381, 676};
    string str[] = {"Y", "Z", "AZ", "ZY", "XEZ", "XFZ", "YZ"};

    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        cout << "Number " << a[i] << " to Excel index is " << s.convertToTitle(a[i]) << ", should be " << str[i] << "." << endl;
    }
    
    // cout << s.convertToTitle(16380) << endl;      // 25(Y), 26(Z), 52(AZ), 701(ZY), 16380(XEZ), 16381(XFA), 676(YZ) 
    return 0;
}
