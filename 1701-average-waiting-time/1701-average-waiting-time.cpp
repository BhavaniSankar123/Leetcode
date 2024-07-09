class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
       long long n=customers.size(),wt=customers[0][1];
        customers[0][1]+=customers[0][0];
        for(int i=1;i<n;i++)
        {
            if(customers[i-1][1]>=customers[i][0])
            customers[i][1]+=customers[i-1][1];
            else
            customers[i][1]+=customers[i][0];
            wt+=(customers[i][1]-customers[i][0]);
        }
        double ans=(wt/(n*1.00000));
        return ans;

    }
};