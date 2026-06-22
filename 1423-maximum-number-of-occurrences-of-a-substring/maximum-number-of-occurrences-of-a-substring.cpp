class Solution {
public:
    int maxFreq(string s, int maxletter, int minsize, int maxSize) {
        unordered_map<char, int> f;
        unordered_map<string, int> q;

        int cnt = 0;
        int ans = 0, i = 0, j = 0;
        while (j < s.size()) {
            if (f[s[j]] == 0)

                cnt++;
            f[s[j]]++;

            while (j - i + 1 > minsize) {
                f[s[i]]--;
                if (f[s[i]] == 0)
                    cnt--;
                i++;
            }

            if (j - i + 1 == minsize && cnt <= maxletter) {
                string temp = s.substr(i, minsize);
                q[temp]++;
                ans = max(ans, q[temp]);
            }

            j++;
        }
        return ans;
    }
};