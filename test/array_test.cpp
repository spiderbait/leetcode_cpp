#include "../common.h"
#include <iostream>

using namespace std;

int printArray(int n[]) {
    cout << n++ << endl;

    return 0;
}

int main() {
    int n[] = {1, 2, 3};
    cout << getArraySize(n) << endl;
    printArray(n);

} 