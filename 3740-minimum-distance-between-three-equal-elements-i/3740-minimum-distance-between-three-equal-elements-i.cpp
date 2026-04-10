class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int,vector<int>> ump;
        if(nums.size()<3)
        return -1;
        int ans = -1;
        for(int i=0;i<nums.size();i++)
           ump[nums[i]].push_back(i);

        for(auto ele : ump)
        {
            if(ele.second.size()<3)
            continue;
            if(ans == -1)
            ans = INT_MAX;
            int n= ele.second.size();
            for(int i=0;i<n-2;i++)
                ans = min(ans,2*(ele.second[i+2] - ele.second[i]));
        }
        return ans;
    }
};