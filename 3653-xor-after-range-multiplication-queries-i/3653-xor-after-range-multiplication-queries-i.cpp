class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        long mod = 1e9+7;
        for(int i=0;i<n;i++)
        {
            int l = queries[i][0], r = queries[i][1];
            int k = queries[i][2], v = queries[i][3];
            while(l<=r && l<nums.size())
            {
                nums[l]= (((nums[l]%mod) * v%mod)) % mod;
                l+=k;
            }
        }
        int exor = 0;
        for(int i : nums)
        exor = exor^i;
        return exor;
    }
};