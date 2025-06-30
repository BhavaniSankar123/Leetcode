class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MAX,n=nums.size(),close=INT_MIN;
        for(int i=0;i<n;i++)
        {
                if(nums[i]<=0)
                {
                    if(close>0 and nums[i]<=0 and abs(nums[i])<close)
                    close=min(close,nums[i]);
                    else
                    close=max(close,nums[i]);
                }
                else
                {
                    if(close<0 and (close==INT_MIN or nums[i]<=abs(close)))
                    close=max(close,nums[i]);
                    else
                    close=min(close,nums[i]);
                }
        }
        return close;
    }
};