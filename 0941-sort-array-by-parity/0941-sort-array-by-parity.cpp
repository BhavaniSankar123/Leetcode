class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j,k=0,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(!(nums[i]&1))
            swap(nums[k++],nums[i]);
        }
        return nums;
    }
};