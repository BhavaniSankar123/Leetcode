class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int c=1,i=0,n=digits.size();
        int add=digits[0]+1;
        while(i<n)
        {
            add = digits[i]+c;
            digits[i]=add%10;
            c= add/10;
            add= digits[i];
            i++;
        }
        if(c)
        {
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;

    }
};