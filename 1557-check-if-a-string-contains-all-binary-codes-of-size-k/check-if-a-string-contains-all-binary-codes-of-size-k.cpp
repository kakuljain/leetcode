class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();

        if (n < k)
            return false;

        unordered_set<string> mpp;

        for (int i = 0; i <= n - k; i++) {
            mpp.insert(s.substr(i, k));
        }

        return mpp.size() == (1 << k);
    }
};