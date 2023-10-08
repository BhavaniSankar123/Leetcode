class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int i,l,r,x,n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++)
        {
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
                    vector<int> ve={nums[i],nums[l],nums[r]};
                    v.push_back(ve);
                    while (l<r && nums[l] == ve[1]) 
                        l++;
                    while(l<r && nums[r] ==ve[2]) 
                        r--;
                }  
            }
            while (i+1<n and nums[i+1]==nums[i]) 
            i++;
        }
        return v;
    }
};