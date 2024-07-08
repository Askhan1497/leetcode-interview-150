class Solution {
public:
void helper(vector<vector<char>>& grid, int rows, int cols, int i, int j) {
        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == '0')
            return;

        grid[i][j] = '0';
        helper(grid, rows, cols, i + 1, j);
        helper(grid, rows, cols, i - 1, j);
        helper(grid, rows, cols, i, j - 1);
        helper(grid, rows, cols, i, j + 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int numOfLands = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    numOfLands += 1;
                    helper(grid, rows, cols, i, j);
                }
            }
        }
        return numOfLands;
    }
};