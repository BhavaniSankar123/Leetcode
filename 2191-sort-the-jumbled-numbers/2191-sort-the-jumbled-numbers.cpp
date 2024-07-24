class Solution {
public:
    static bool comp(pair<int,pair<int,int>> p1,pair<int,pair<int,int>> p2)
    {
        if(p1.first!=p2.first)
         return p1.first<p2.first;
        else
         return p1.second.second<p2.second.second;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> ans;
        vector<pair<int,pair<int,int>>> vec;
        for(int i=0;i<nums.size();i++)
        {
            string x=to_string(nums[i]);
            for(int j=0;j<x.length();j++)
            x[j]=mapping[x[j]-'0']+'0';
            vec.push_back({stoi(x),{nums[i],i}});
        }
        sort(vec.begin(),vec.end(),comp);
        for(auto i:vec)
        ans.push_back(i.second.first);
        // cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<"\n";
        return ans;
    }
};