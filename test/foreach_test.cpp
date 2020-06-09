#include <iostream>

using namespace std;

int main() {
    int n[] = {1, 2, 3};
    int i = 0;
    while(i != NULL) {
        cout << n[i] << endl;
        i ++;
    }
    for (int i: n)
    {
        cout << i << endl;;
    }
    
}