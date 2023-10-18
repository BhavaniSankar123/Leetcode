class Solution {
public:
    vector<int> getRow(int rowIndex) {
         int n = rowIndex+1;
        vector<int> x;
        if (n == 1)
            return {1};
        vector<int> y;
        for (int i = 1; i < n; i++) 
        {
            x.push_back(1);
            for (int j = 2; j < i + 1; j++)
                x.push_back(y[j - 2] + y[j - 1]);
            x.push_back(1);
            y = x;
            x.clear();
        }
        return y;
    }
};