#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> v2d(arr, arr+size);
    cout << v2d.size() << endl;
}