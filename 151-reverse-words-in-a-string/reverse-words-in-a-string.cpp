class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int i = n - 1, r = n - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            if (i < 0)
                break;
            r = i;
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            int l = i + 1;
            while (l <= r) {
                ans += s[l];
                l++;
            }
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i >= 0)
                ans += ' ';
        }
        return ans;
    }
};