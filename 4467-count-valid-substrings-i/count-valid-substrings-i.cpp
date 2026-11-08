class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        long long cnt = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            while (right >= 2 && s[right-2] == 'a' &&
                   s[right-1] == 'b' && s[right] == 'c') {
                left = right - 1;
            }

            cnt += (right - left + 1);
        }

        return cnt;
    }
};