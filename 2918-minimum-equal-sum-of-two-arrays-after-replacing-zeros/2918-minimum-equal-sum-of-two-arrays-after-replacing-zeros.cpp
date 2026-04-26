static const auto _ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0;
        long long sum1=0,sum2=0;
        for(int i : nums1)
       {
            if(i==0) c1++;
            sum1+=i;
       }
        for(int i : nums2)
        {
            if(i==0) c2++;
            sum2+=i;
        }
        sum1+=c1;
        sum2+=c2;
        if (sum1 < sum2) return c1 ? sum2 : -1;
        if (sum2 < sum1) return c2 ? sum1 : -1;
        return sum1;
    }
};