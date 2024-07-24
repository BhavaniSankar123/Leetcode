class Solution {
public:
    static bool compare(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.second!=p2.second)
         return (p1.second < p2.second);
        else
         return (p1.first> p2.first);
    }
    vector<int> frequencySort(vector<int>& nums) {
        int i,n=nums.size();
        unordered_map<int,int> mp;
        for(i=0;i<n;i++)
            mp[nums[i]]++;
        vector<pair<int,int>> v;
        for(auto it : mp)
        v.push_back({it.first,it.second});
        nums.clear();
        sort(v.begin(),v.end(),compare);
        for(i=0;i<v.size();i++)
        {
            int c=v[i].second;
            while(c--)
            nums.push_back(v[i].first);
        }
        return nums;
    }
};