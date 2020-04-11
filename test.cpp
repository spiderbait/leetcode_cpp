#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int numArray[] = {3, 3};
    vector<int> nums(numArray, numArray+sizeof(numArray)/sizeof(int));
    map<int, int> kvMap;

    for (int i = 0; i < nums.size(); i++) 
    {
        kvMap[numArray[i]] = i;
    }

    cout << kvMap.at(3) << endl;


}