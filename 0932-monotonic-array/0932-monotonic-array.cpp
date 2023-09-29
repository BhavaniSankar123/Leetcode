class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i,f=0,g=0,n=nums.size();
        if(n==1)
        return true;
            for(i=0;i<n-1;i++)
            {
                if(nums[i]>=nums[i+1])
                f++;
            }
            if(f==n-1)
            return true;
            f=0;
             for(i=0;i<n-1;i++)
            {
                if(nums[i]<=nums[i+1])
                f++;
            }
            if(f==n-1)
            return true;
            return false;
    }
};