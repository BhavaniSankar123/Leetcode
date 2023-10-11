class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> v,x;
        for(auto i:flowers)
        {
            v.push_back(i[0]);
            x.push_back(i[1]);
        }
        sort(v.begin(),v.end());
        sort(x.begin(),x.end());
        vector<int> ans;
        for(int i:people)
        {
           int u=upper_bound(v.begin(),v.end(),i)-v.begin();
           int l=lower_bound(x.begin(),x.end(),i)-x.begin();
            ans.push_back(u-l);
        }
        return ans;
    }
};