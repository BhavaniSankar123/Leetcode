class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0,n=nums.size();
        while(l<n and nums[l]==0)
        l++;
        if(l==n)
        return 0;
        if(nums[l]>0)
        return n-l;
        while(n>0 and nums[n-1]==0)
        n--;
        if(nums[n-1]<0)
        return n;
        
        int pos=lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        int neg=upper_bound(nums.begin(),nums.end(),0)-nums.begin();
        while(neg>=0 and neg<n and nums[neg]>=0)
        neg--;
        while(pos>=0 and pos<n and nums[pos]==0)
        pos++;
        pos=n-pos;
        neg++;
        cout<<pos<<neg;
        return max(pos,neg);
    }
};