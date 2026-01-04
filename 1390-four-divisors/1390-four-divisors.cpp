class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            int c=0,div=0;
            for(int j=2;j*j<=x;j++)
            {
                
                if(x%j==0)
                {
                c++;
                div=j;
                }
                if(j*j==x)
                {
                    if(c==1)
                    {
                    c=0;
                    continue;
                    }
                }
            }
            
            if(c==1)
            {
                ans= ans+(1+div+x/div+x);
            }
        }
        return ans;
    }
};