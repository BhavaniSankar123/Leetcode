class Solution {
public:
   vector<string> combineLetters(vector<string> &x , string y)
   {
    vector<string> comb;
    for(auto i : x)
    {
        for(auto j : y)
        comb.push_back(i + j);
    }
    return comb;
   }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        map<char,string> data;
        data['2'] = "abc";
        data['3'] = "def";
        data['4'] = "ghi";
        data['5'] = "jkl";
        data['6'] = "mno";
        data['7'] = "pqrs";
        data['8'] = "tuv";
        data['9'] = "wxyz";
        for(auto c : data[digits[0]])
        ans.push_back(string(1,c));
        for(int i = 1;i<digits.size();i++)
        ans = combineLetters(ans,data[digits[i]]);
        return ans;
    }
};