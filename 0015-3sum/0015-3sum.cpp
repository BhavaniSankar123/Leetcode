class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> v;
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
                    v.insert({nums[i],nums[l],nums[r]});
                    l++,r--;
                }  
            }
        }
        vector<vector<int>> ans;
        for(auto i:v)
        ans.push_back(i);
        return ans;
    }
};