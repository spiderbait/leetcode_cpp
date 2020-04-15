#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int abs_x = abs(x);

        const char* c_str = to_string(abs_x).c_str();
        int len = strlen(c_str);
        // char* c_rstr = (char*) malloc(sizeof(c_str));
        char* c_rstr = new char[len];

        cout << sizeof(c_str) << endl;
        cout << sizeof(c_rstr) << endl;

        for(int i=0; i<len; i++) {
            *(c_rstr+i) = *(c_str+len-i-1);
        }

        if(x<0) {
            return -stoi(c_rstr);   
        }else{
            return stoi(c_rstr);
        }
    }
};

int main() {
    Solution s;
    cout << s.reverse(-1234225) << endl;

}