#include "../common.h"
#include <iostream>
#include <vector>

using namespace std;

int printArray(int n[]) {
    cout << n++ << endl;

    return 0;
}

void stringSplit(string s) {
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i) << endl;
    }
    
}

int main() {
    string s = "1,2,3";
    stringSplit(s);

    return 0;
} 