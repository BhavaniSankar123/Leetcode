class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int dist = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]== target)
            {
                if(dist > abs(i - start))
                    dist = abs(i - start);
            }
        }
        return dist;
    }
};