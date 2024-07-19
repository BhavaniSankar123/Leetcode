class Solution {
public:
    int luckymin(vector<vector<int>> &matrix,int x)
    {
        int mi=1e5;
        for(int i=0;i<matrix[0].size();i++)
        mi=min(mi,matrix[x][i]);
        return mi;
    }
    int luckymax(vector<vector<int>> &matrix,int x)
    {
        int ma=0;
        for(int i=0;i<matrix.size();i++)
        ma=max(ma,matrix[i][x]);
        return ma;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i,j;
        vector<int> ans;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                int p=luckymin(matrix,i);
                int q=luckymax(matrix,j);
                // cout<<p<<" "<<q<<"\n";
                if(p==q)
                ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};