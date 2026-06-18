class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        int l = 0, r = 0;

        for (auto it : t) {
            a[it]++;
        }
        int formed = 0;
        int req = a.size();
        int st = 0;
        int len = INT_MAX;
        while (r < s.size()) {
            b[s[r]]++;
            if (b[s[r]] == a[s[r]]) {
                formed++;
            }
            while (formed == req) {
                if (r - l + 1 < len) {
                    len = r - l + 1;
                    st = l;
                }
                b[s[l]]--;
                if ( b[s[l]] < a[s[l]])
                    formed--;
                l++;
            }
            r++;
        }
        if (len == INT_MAX)
            return "";

        return s.substr(st, len);
    }
};