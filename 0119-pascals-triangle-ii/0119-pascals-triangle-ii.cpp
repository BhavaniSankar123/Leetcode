class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        if(rowIndex == 0) return {1};
        vector<int> vec;
        vec.push_back(1);
        while(rowIndex--) {
            row.push_back(1);
            for(int i=1;i<vec.size();i++) {
                row.push_back(vec[i]+vec[i-1]);
            }
            row.push_back(1);
            vec.clear();
            vec.insert(vec.begin(),row.begin(),row.end());
            row.clear();
        }
        return vec;
    }
};