class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), x = 0, y = grid[0].size() - 1;
        int res = 0;
        while (x < m && y >= 0) {
            if (grid[x][y] < 0) {
                y--;
                res += m - x;
            } else x++;
        }
        return res;
    }
};