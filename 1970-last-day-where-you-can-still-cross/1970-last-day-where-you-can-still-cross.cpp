class Solution {
public:

    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};

    bool solve(int days, vector<vector<int>> &cells, int row, int col)
    {
        vector<vector<int>> mat(row,vector<int>(col,0));
        vector<vector<int>> vis(row,vector<int>(col,0));
        for(int i=0;i<days;i++){
            mat[cells[i][0]-1][cells[i][1]-1]=1;
        }

        queue<pair<int,int>> q;
        for(int i=0;i<col;i++){
            if(mat[0][i]==0) q.push({0,i});
        }


        if(!q.size()) return false;

        while(!q.empty())
        {
            int x = q.front().first; int y = q.front().second; q.pop();
            if(vis[x][y]) continue;
            vis[x][y]=1;


            if(x==row-1) return true;

            for(int i=0;i<4;i++)
            {
                int x1 = x+dx[i]; int y1=y+dy[i];
                if(x1>=0 && x1<row && y1>=0 && y1<col && !vis[x1][y1] && mat[x1][y1]==0)
                {
                    q.push({x1,y1});
                }
            }
        }
        return false;

    }

    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {

        int n = cells.size();

        int low =0; int high =n-1;

        while(low<=high)
        {
            int mid = (low+high)/2;
            bool ans = solve(mid,cells,row,col);
            if(ans)
            {
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return high;

    }
};