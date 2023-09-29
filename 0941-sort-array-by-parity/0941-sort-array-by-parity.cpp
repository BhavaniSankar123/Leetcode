class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j,k=0,n=nums.size();
        j=n-1;
        while(i<=j)
        {
            if(nums[i]%2==0)
            swap(nums[k++],nums[i]);
            i++;
        }
        return nums;
    }
};