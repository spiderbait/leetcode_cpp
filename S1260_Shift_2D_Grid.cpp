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
                int i = this->shiftX(x, grid[0].size(), k);
                int j = this->shiftY(x, y, grid[0].size(), grid.size(), k);
                result[j][i] = grid[y][x];
            }
        }

        return result;
    }

    int shiftX(int x, int maxX, int k) {
        return (x + k) % maxX;
    }

    int shiftY(int x, int y, int maxX, int maxY, int k) {
        return ((x + k) / maxX + y) % maxY;
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