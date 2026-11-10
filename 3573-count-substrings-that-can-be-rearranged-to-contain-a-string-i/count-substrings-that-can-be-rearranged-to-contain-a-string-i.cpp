class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        long long ans = 0;
        int n = word1.size();
        int l = 0, r = 0, cnt = 0;
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;
        for (auto it : word2) {
            mpp2[it]++;
        }
        while (r < n) {
            mpp1[word1[r]]++;
            if (mpp1[word1[r]] <= mpp2[word1[r]])
                cnt++;
                while(cnt==word2.size())
            {
                ans += n - r;
                mpp1[word1[l]]--;
                if (mpp1[word1[l]] < mpp2[word1[l]])
                    cnt--;

                l++;
            }
            r++;
        }
        return ans;
    }
};