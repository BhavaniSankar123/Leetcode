class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
             for(int i=0;i<s.length();i++)
             {
                if(s[i]=='(')
                st.push(i);
                else if(s[i]==')')
                {
                    reverse(s.begin()+st.top()+1,s.begin()+i);
                    st.pop();
                }
             }
             s.erase(remove(s.begin(),s.end(),'('),s.end());
             s.erase(remove(s.begin(),s.end(),')'),s.end());

             return s;


    }
};