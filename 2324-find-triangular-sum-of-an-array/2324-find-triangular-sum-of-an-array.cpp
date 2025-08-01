class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i,n=nums.size();
        if(n==1) return nums[0];
        vector<int> row;
        while(n--) {
            for(int i=1;i<=n;i++)
            row.push_back((nums[i] + nums[i-1])%10);
            nums.clear();
            nums.insert(nums.begin(),row.begin(),row.end());
            // for(int i:nums)
            // cout<<i<<" ";
            // cout<<"\n";
            row.clear();
        }
        return nums[0];
    }
};