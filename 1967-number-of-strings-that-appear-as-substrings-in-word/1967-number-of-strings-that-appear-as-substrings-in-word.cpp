class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(string pattern : patterns)
        {
            if(word.contains(pattern))
            c++;
        }
        return c;
    }
};