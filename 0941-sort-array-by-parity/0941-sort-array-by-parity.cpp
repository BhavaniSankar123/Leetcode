class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0,k=0;i<nums.size();i++)
        {
            if(!(nums[i]&1)) //& checking for given element is even or not
            swap(nums[k++],nums[i]);
        }
        return nums;
    }
};