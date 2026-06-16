class Solution {
public:
    string processStr(string s) {
        string res="";
        for(char c : s)
        {
            if(c == '*')
            res = res!="" ? res.substr(0, res.length()-1) : "";
            else if(c == '#')
            res = res + res;
            else if(c == '%')
            reverse(res.begin(),res.end());
            else
            res = res + c;
        }
        return res;
    }
};