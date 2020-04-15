#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

template <class T>
int getArrayLength(T &nums) {
    return sizeof(nums)/sizeof(int);
}

// int getArrayLength(int nums[]) {
//     return sizeof(nums)/sizeof(int);
// }

int main() {
    // int numArray[] = {1, 2, 3, 4};
    // int a = 10;
    // int b = 2;
    // vector<int> nums(numArray, numArray+sizeof(numArray)/sizeof(int));
    // map<int, int> kvMap;

    // for (int i = 0; i < nums.size(); i++) 
    // {
    //     kvMap[numArray[i]] = i;
    // }

    // cout << kvMap.at(3) << endl;

    // cout << getArrayLength(numArray) << endl;


    // cout << numArray[1] << endl;
    // cout << 1[numArray] << endl;
    // cout << *(numArray + 1) << endl;

    // cout << &numArray << endl;
    // cout << &a << endl;
    // cout << &b << endl;

    const char* s = "0123";
    char* a = new char[4];
    cout << s << endl;
    
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        cout << *(s+i) << endl;
        *(a+i) = *(s+i);
    }

    cout << a << endl;
    
}