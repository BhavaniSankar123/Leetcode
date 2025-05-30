class Solution {
public:
    string removeOuterParentheses(string s) {
        int i=0,n=s.length(),c=0;
        string ans="";
        for(i=0;i<n;i++)
        {
            if(c>0) {
                if(c==1)
                {
                    if(s[i]!=')')
                    ans= ans + s[i];
                }
                else
                ans=ans+ s[i];  
                
            }
            if(s[i]=='(')
            c++;
            else
            c--;
        }
        return ans;
    }
};