class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int mi = INT_MAX,n = words.size();
        for(int i=0;i<n ;i++)
        {
            if(words[i] == target)
            {
                int right = (i - startIndex + n) % n;
                mi = min(mi,right);
                // cout<<right<<" ";
                int left = (startIndex  -  i + n ) % n;
                mi = min(mi,left);
                // cout<<left<<"\n";
            }
        }
        return mi == INT_MAX ? -1 : mi;
    }
};