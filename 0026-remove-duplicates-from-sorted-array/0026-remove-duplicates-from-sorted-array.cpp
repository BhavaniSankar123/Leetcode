class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j=1,n=nums.size();
        for(i=1;i<n;i++)
        {
            if(nums[i-1]!=nums[i])
            nums[j++]=nums[i];
        }
        return j;
    }
};