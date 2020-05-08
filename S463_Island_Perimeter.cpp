#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int totalPerimeter = 0;
        int x = 0, y = 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    x = j;
                    y = i;
                    goto end_loop;
                }
            }
        }
        end_loop:
        
        cout << y << x << endl;
        
        return totalPerimeter;
    }
    // int islandPerimeter(vector<vector<int>>& grid) {
    //     int totalPerimeter = 0;

    //     for (int i = 0; i < grid.size(); i++) {
    //         for (int j = 0; j < grid[0].size(); j++) {
    //             totalPerimeter += getGridPerimeter(grid, j, i);
    //         }
    //     }
        
    //     return totalPerimeter;
    // }

    //     int getGridPerimeter(vector<vector<int>>& grid, int x, int y) {
    //     int topX = grid[0].size();
    //     int topY = grid.size();
    //     int gridLength = 0;

    //     int up = -1;
    //     int down = -1;
    //     int left = -1;
    //     int right = -1;

    //     if (grid[y][x] == 0) {
    //         return 0;
    //     }

    //     if (y-1 >= 0) {
    //         // cout << "up" << endl;
    //         up = grid[y-1][x];
    //     } else {
    //         gridLength ++;
    //     }
        
    //     if (y+1 < topY) {
    //         // cout << "down" << endl;
    //         down = grid[y+1][x];
    //     } else {
    //         gridLength ++;
    //     }
        
    //     if (x-1 >= 0) {
    //         // cout << "left" << endl;
    //         left = grid[y][x-1];
    //     } else {
    //         gridLength ++;
    //     }
        
    //     if (x+1 < topX) {
    //         // cout << "right" << endl;
    //         right = grid[y][x+1];
    //     } else {
    //         gridLength ++;
    //     }

    //     if (up == 0) {
    //         gridLength ++;
    //     }

    //     if (down == 0) {
    //         gridLength ++;
    //     }

    //     if (left == 0) {
    //         gridLength ++;
    //     }
    //     if (right == 0) {
    //         gridLength ++;
    //     }
        
    //     return gridLength;
    // }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,1,0,0}, {1,1,1,0}, {0,1,0,0}, {1,1,0,0}};

    int result = s.islandPerimeter(grid);
    // cout << result << endl;
}