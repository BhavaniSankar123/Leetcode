class Solution {
public:
    int minOperations(vector<int>& nums) {
        int f =0, n= nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] != nums[i+1])
            {
                f=1;
                break;
            }
        }
        return f;
    }
};