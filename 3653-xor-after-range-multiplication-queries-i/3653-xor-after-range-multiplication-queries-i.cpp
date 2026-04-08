class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        int mod = 1e9+7;
        for(int i=0;i<n;i++)
        {
            int l = queries[i][0], r = queries[i][1];
            int k = queries[i][2], v = queries[i][3];
            while(l<=r && l<nums.size())
            {
                nums[l]= ((1LL * nums[l] * v)) % mod;
                l+=k;
            }
        }
        int exor = 0;
        for(int i : nums)
        exor = exor^i;
        return exor;
    }
};