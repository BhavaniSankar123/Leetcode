class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0;
        long long sum1=0,sum2=0;
        for(int i : nums1)
       {
            if(i==0)
            c1++;
            sum1+=i;
       }
        for(int i : nums2)
        {
            if(i==0)
            c2++;
            sum2+=i;
        }
        // cout<<sum1<<" "<<sum2;
        if((c1==0 && sum1 < sum2 + c2) or (c2==0 && sum2 < sum1 + c1))
        return -1;
        return max(sum1+c1,sum2+c2);
    }
};