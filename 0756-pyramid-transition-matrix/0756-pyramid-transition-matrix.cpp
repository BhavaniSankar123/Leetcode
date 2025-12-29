class Solution {
public:
    bool dfs(string curStr, int curI, int n,  unordered_map<string, vector<char>>& mp) {
        if (n == 1) return true;
        bool res = false;
        if (curI < n - 1) {
            string curBot = curStr.substr(curI, 2);
            for (int i = 0; i < mp[curBot].size(); ++i) {
                curStr[curI] = mp[curBot][i];
                res |= dfs(curStr, curI + 1, n, mp);
                if (res) return true;
            }
        } else {
            res |= dfs(curStr, 0, n - 1, mp);
            if (res) return true;
        }

        return res;
    }

    bool pyramidTransition(string bottom, vector<string>& allowed) {
        unordered_map<string, vector<char>> mp;
        for (int i = 0; i < allowed.size(); ++i) {
            mp[allowed[i].substr(0, 2)].push_back(allowed[i][2]);
        }

        return dfs(bottom, 0, bottom.size(), mp);
    }
};