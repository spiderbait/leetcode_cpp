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

};

int main() {
    Solution s;

}