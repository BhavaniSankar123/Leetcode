class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i :nums)
        {
            string s= to_string(i);
            if(s.length()%2==0)
            c++;
        }
        return c;
    }
};