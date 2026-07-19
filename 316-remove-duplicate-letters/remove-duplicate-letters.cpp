class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        string ans = "";
        bool vis[26] = {};
        vector<int> last(26);
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (vis[ch - 'a'])
                continue;
            while (!st.empty() && st.top() > ch && last[st.top() - 'a'] > i) {

                vis[st.top()- 'a'] = false;
                st.pop();
            }
            st.push(ch);
            vis[ch - 'a'] = true;
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};