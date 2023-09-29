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
                 if(nums[i]<=nums[i+1])
                g++;
            }
            if(f==n-1 or g==n-1)
            return true;
            return false;
    }
};