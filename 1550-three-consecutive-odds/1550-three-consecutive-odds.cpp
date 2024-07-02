class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,n=arr.size(),c=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%2)
            c++;
            else
            c=0;
            if(c==3)
            return true;
        }
        return false;
    }
};