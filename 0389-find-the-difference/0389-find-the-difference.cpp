class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp,mp1;
        for(char i:s)
        mp[i]++;
        for(char i:t)
        mp1[i]++;
        for(auto i:mp1)
        {
            if(mp[i.first]!=mp1[i.first])
            return i.first;
        }
        return t[0];
    }
};