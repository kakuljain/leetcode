class Solution {
public:
    int solve(string s, int k) {
        unordered_map<char, int> mpp;
        int left = 0, right = 0;
        string l = "";
        string r = "";
        if (s.size() < k)
            return 0;

        for (auto it : s) {
            mpp[it]++;
        }
        for (int i = 0; i < s.size(); i++) {

            if (mpp[s[i]] < k)

            {
                l = s.substr(0, i);
                r = s.substr(i + 1);
                left = solve(l, k);
                right = solve(r, k);
                return max(left, right);
            }
        }
         return s.size();
    }
    int longestSubstring(string s, int k) { return solve(s, k); }
};