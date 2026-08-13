class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;

        for(char c : s)
        {
            if(c == '(')
            {
                if(!st.empty())
                {
                    ans += '(';
                }
                st.push('(');
            }
            else
            {
                st.pop();

                if(!st.empty())
                {
                    ans += ')';
                }
            }
        }

        return ans;
    }
};