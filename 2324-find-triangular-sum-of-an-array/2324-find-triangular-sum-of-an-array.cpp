class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n--) {
             vector<int> row;
            for(int i=1;i<=n;i++)
                row.push_back((nums[i] + nums[i-1])%10);
            nums=row;
        }
        return nums[0];
    }
};