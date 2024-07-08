class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i,c=1;
        for(i=digits.size()-1;i>=0;i--)
        {
            if(c)
            {
                c=(digits[i]+1)/10;
                digits[i]=(digits[i]+1)%10;
            }
            else
             break;
        }
        reverse(digits.begin(),digits.end());
        if(c)
        digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};