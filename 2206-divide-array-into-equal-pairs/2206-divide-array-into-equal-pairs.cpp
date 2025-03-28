class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[500]={0};
        for(int i : nums)
        a[i-1]++;
        for(int i=0;i<500;i++)
        {
            if(a[i]%2)
            return false;
        }
        return true;
    }
};