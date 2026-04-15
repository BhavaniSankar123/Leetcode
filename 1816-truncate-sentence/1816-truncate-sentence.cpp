class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int i=0,n=s.length(),c=0;
        while(i<n)
        {
            if(s[i]==' ')
            c++;
            if(c==k) break;
            ans = ans + s[i];
            i++;
        }
        return ans;
    }
};