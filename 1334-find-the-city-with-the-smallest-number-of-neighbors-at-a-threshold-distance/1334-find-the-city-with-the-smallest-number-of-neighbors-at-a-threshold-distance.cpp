class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> vec(n, vector<int>(n, 1e9)); 

        for (int i = 0; i < n; ++i) 
            vec[i][i] = 0; 

        for (auto& x : edges) {
            vec[x[0]][x[1]] = x[2];
            vec[x[1]][x[0]] = x[2];
        }

        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) 
                    vec[i][j] = min(vec[i][j], vec[i][k] + vec[k][j]);
            }
        }
        int ans = -1,mini = n;
        for (int i = 0; i < n; ++i) {
            int c=count_if( &vec[i][0], &vec[i][0]+n, [&](int x) 
            { 
                return  x <= distanceThreshold;
            })-1;
            if (c <= mini) {
                mini = c;
                ans = i;
            }
        }

        return ans;
    }
};