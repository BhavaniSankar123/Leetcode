class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int x=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int y=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(y==nums.size() or (y<nums.size() and nums[y]!=target))
        y--;
        cout<<x<<y;
        if(x<nums.size() and y<nums.size() and nums[x]==target and nums[y]==target)
        return {x,y};
        return {-1,-1};
    }
};