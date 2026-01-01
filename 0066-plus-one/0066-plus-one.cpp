class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int c=1,i=0,n=digits.size();
        int add=digits[0]+1;
        while(i<n)
        {
            if(digits[i]<9)
            {
            digits[i]++;
            reverse(digits.begin(),digits.end());
            return digits;
            }
            digits[i]=0;
            i++;
        }

        digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;

    }
};