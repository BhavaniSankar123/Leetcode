class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int i=0,n=s.length(),c=0;
        while(i<n)
        {
            if(s[i]==' ')
            k--;
            if(k==0) break;
            ans = ans + s[i];
            i++;
        }
        return ans;
    }
};