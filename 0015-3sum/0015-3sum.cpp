class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int i,l,r,x,n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++)
        {
             if(i>0 and nums[i]==nums[i-1]) 
                 continue;
            x=-nums[i];
            l=i+1,r=n-1;
            while(l<r)
            {
                if(nums[l]+nums[r]>x)
                  r--;
                else if(nums[l]+nums[r]<x)
                  l++;
                else
                {
                    v.push_back({nums[i],nums[l],nums[r]});
                     l++,r--;
                    while(l<r and nums[l] == nums[l-1]) 
                        l++;
                    while(l<r and nums[r] == nums[r+1]) 
                        r--;
                }  
            }
        }
        return v;
    }
};