class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        const int MOD = 1e9 + 7;
        int n = nums.size();

        vector<long long> pos(n);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'R')
                pos[i] = 1LL * nums[i] + d;
            else
                pos[i] = 1LL * nums[i] - d;
        }

        sort(pos.begin(), pos.end());

        long long ans = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            ans = (ans + (1LL * i * pos[i] - sum)) % MOD;
            sum += pos[i];
        }

        return (ans + MOD) % MOD;
    }
};