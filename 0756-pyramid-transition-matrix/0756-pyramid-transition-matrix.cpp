class Solution {
private:
std::unordered_map<string, std::vector<char>> mp;
std::unordered_map<string, bool> memo_;
    bool dfs(string& previous, string current) { 
        if (previous.size() == 1) { 
            return true;
        }
        if (previous.length() - 1 == current.length()) {
            if (memo_.contains(current)) { 
                return memo_[current];
            }
            bool result = dfs(current, "");
            memo_[current] = result;
            return result;
        }
        int idx = current.length();
        for (const auto& top : mp[previous.substr(idx, 2)]) {
            if (dfs(previous, current+top)) { 
                return true;
            }
        }
        return false;
    }
public:
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for (const auto& triple : allowed) { 
            mp[triple.substr(0,2)].push_back(triple.back());
        }
        return dfs(bottom, "");
    }
};