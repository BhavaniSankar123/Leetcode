class Solution {
public:
    int minDifference(vector<int>& nums) {
        int i,k,n=nums.size(),m;
         if(n<= 4)
            return 0;
        
        sort(nums.begin(), nums.end());
        k=n-3, m=nums.back()-nums[0];
        for(i=k-1;i<n;i++) 
            m= min(m,nums[i]-nums[i - k + 1]);
        
        return m;
    }
};