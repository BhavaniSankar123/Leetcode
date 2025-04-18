class Solution {
public:
    using info = pair<int, char>; 
    static string str(const vector<info>& v) {
        string ans;
        ans.reserve(v.size()<<1);
        for (auto& [f, c] : v) {
            ans+= to_string(f);
            ans.push_back(c);
        }
        return ans;
    }
    static string countAndSay(int n) {
        if (n==1) return "1";
        vector<info> v={{1, '1'}};
        string s1=str(v);
        for (int i=3; i<=n; i++) {
            const int l=s1.size();
            char c=s1[0];
            v={{1, c}};
            for (int i=1; i<l; i++) {
                if (s1[i]==c)
                    v.back().first++;
                else {
                    v.emplace_back(1, s1[i]);
                    c=s1[i];
                }
            }
            s1=str(v);
        }
        return s1;
    }
};