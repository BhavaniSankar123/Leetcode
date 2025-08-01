class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> row;
        vector<vector<int>> ans;

        ans.push_back({1});
        if(numRows ==1) return ans;

        vector<int> vec;
        vec.push_back(1);
        numRows--;
        while(numRows--){
            row.push_back(1);
            for(int i=1;i<vec.size();i++) {
                row.push_back(vec[i]+vec[i-1]);
            }
            row.push_back(1);
            vec.clear();
            vec.insert(vec.begin(),row.begin(),row.end());
            row.clear();
            ans.push_back(vec);
        }
        return ans;
    }
};