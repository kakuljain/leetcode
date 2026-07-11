class Solution {
public:
    bool check(string& cur, string& s, int k) {
        if (cur.empty())
            return true;
        int j = 0;
        for (int i = 0; i < k; i++) {
            for (auto it : cur) {
                while (j < s.size() && s[j] != it) 
                    j++;
                
                if (j == s.size())
                    return false;
                     j++;
            }
           
        }
        return true;
    }
    void solve(vector<char> &frq, string& s, int k, string& ans, string& cur) {
        if (!check(cur, s, k))
            return;
        if (cur.size() > ans.size() || (cur.size() == ans.size() && cur > ans))
            ans = cur;

        
        if (cur.size() >= s.size() / k)
            return;
         for (int i = 0; i < frq.size(); i++) {
            cur.push_back(frq[i]);
            solve(frq,s, k, ans,cur);
            cur.pop_back();
        }
    }
    string longestSubsequenceRepeatedK(string s, int k) {
        unordered_map<char, int> mpp;
        vector<char> frq;
        string ans = "";
        string cur="";
        for (auto it : s) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            if (it.second >= k) {
                frq.push_back(it.first);
            }
        }
        sort(frq.begin(), frq.end(), greater<char>());
        solve(frq, s,k, ans,cur);
        return ans;
    }
};