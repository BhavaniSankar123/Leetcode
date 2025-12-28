class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(),c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            c += (grid[i][j] < 0) ;
        }
        return c;
    }
};