class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        for(int i=0;i<logs.size();i++)
        {
            if(c>0 and logs[i]=="../")
            c--;
            else if(logs[i]=="./")
            c=c;
            else
            c++;
        }
        return c;
    }
};