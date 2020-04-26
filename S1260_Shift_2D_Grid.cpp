#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int t;
        vector<vector<int>> result;
        for(int y=0; y<grid.size(); y++) {
            for(int x=0; x<grid[0].size(); x++) {
                int i = (x + k) % grid[0].size();
                int j = ((x + k) / grid[0].size() + y) % grid.size();
                result[j][i] = grid[y][x];
            }
        }
        return result;
    }

    void test() {
        int size = 4;
        int k = 4;
        for(int i=0; i < size; i++) {
            for(int j=0; j < size; j++) {
                cout << j << ", " << i;
                cout << " -> " << this->shiftX(j, size, k) << ", " << this->shiftY(j, i, size, size, k) << endl;
            }
        }
    }

};

int main() {
    Solution s;

    s.test();
}