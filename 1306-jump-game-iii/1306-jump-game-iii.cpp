class Solution {
public:
    bool solve(int i,int n,vector<int>& arr, vector<bool>& dp)
    {
        if(i>=n || i<0)
        {
            return false;
        }
        if(dp[i]==true)
        {
            return false;
        }
        else
        {
            dp[i]=true;
        }

        if(arr[i]==0)
        return true;
        else
        return solve(i+arr[i],n,arr,dp)||solve(i-arr[i],n,arr,dp);
    }
    bool canReach(vector<int>& arr, int start) {
        if(arr[start]==0)
        return true;
        vector<bool> dp(arr.size(),false);
        dp[start]=true;
        return solve(start+arr[start],arr.size(),arr,dp) || solve(start-arr[start],arr.size(),arr,dp);
    }
};