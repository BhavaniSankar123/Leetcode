class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size(),close=nums[0];
        for(int i=0;i<n;i++)
        {
                if(abs(nums[i])<abs(close))
                    close=nums[i];
                else if(abs(nums[i])==abs(close))
                    close=max(close,nums[i]);
        }
        return close;
    }
};