class Solution {
public:
    bool pal(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void p(int st, string& s, vector<vector<string>>& ans,
           vector<string>& curr) {
        int n = s.size();
        if (st == n) {
            ans.push_back(curr);
            return ;
        }
        for (int i = st; i < n; i++) {
            if(pal(s,st,i))
           { curr.push_back(s.substr(st,i-st+1));
            p(i+1, s, ans, curr);
            curr.pop_back();
           }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
       
        p(0, s, ans, curr);
        return ans;
    }
};