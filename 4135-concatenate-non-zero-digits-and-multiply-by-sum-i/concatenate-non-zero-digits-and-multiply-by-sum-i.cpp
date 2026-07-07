class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0)
            return 0;
        string s = to_string(n);
        string ans = "";
        int sum = 0;
        for (auto it : s) {
            if (it != '0') {
                sum += it - '0';
                ans += it;
            }
        }
        long long x = stoll(ans);
        x *= sum;
        return x;
    }
};