#include <iostream>
#include <vector>
#include <map>

using namespace std;

template <class T>
int getArrayLength(T &nums) {
    return sizeof(nums)/sizeof(int);
}

int main() {
    int numArray[] = {3, 3};
    // vector<int> nums(numArray, numArray+sizeof(numArray)/sizeof(int));
    // map<int, int> kvMap;

    // for (int i = 0; i < nums.size(); i++) 
    // {
    //     kvMap[numArray[i]] = i;
    // }

    // cout << kvMap.at(3) << endl;
    int n = 8;
    char c1 = 'a';
    char c2[] = "abcd";

    cout << &n << endl;
    cout << c1 << endl;
    cout << &c2 << endl;


}