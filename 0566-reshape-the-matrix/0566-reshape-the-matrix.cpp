class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int i,j,m=mat.size(),n=mat[0].size();
        vector<int> v;
        if(n*m!=r*c)
        return mat;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            v.push_back(mat[i][j]);
        }
        vector<vector<int>> ans(r,vector<int>(c));
        int k=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            ans[i][j]=v[k++];
        }
        return ans;
    }
};