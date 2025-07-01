class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],m=nums[0],n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(sum<0)
            sum=0;
            sum+=nums[i];
            m=max(m,sum);
          
        }
        return m;
    }
};