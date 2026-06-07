class Solution {
public:
    int smallestNumber(int n) {

        string s = "";

        while (n > 0) {
            s += (n % 2) + '0';
            n /= 2;
        }

        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                s[i] = '1';
            }
        }
        int ans = 0;

        for (char ch : s) {
            ans = ans * 2 + (ch - '0');
        }
        return ans;
    }
};