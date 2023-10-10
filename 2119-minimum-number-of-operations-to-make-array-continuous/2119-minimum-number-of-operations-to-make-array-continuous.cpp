class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i,c,n=nums.size();
        sort(nums.begin(),nums.end());
        c=1;
        for(i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            nums[c++]=nums[i];
        }
        int j=0,x=n;
        for(i=0;i<c;i++)
        {
           while(j<c and nums[j]-nums[i]<=n-1)
           j++;
           x=min(x,n-j+i);
        }
        return x;
    }
};