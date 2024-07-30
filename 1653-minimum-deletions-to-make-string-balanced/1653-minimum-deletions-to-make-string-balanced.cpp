class Solution {
public:
    int minimumDeletions(string s) {
        int i,n=s.length(),c=0;
        vector<int> v(n+1,0);
        for(i=1;i<=n;i++)
        {
            if(s[i-1]=='a')
            v[i]=min(v[i-1]+1,c);
            else
            {
                v[i]=v[i-1];
                c++;
            }
        }        
        return v[n];
    }
};