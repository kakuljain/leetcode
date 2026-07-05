class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], nums[i]);
        }
        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], nums[i]);
        }
        for (int j = 1; j < n - 1; j++) {
            long long curr = 1LL * (prefix[j - 1] - nums[j]) * suffix[j + 1];
            ans = max(ans, curr);
        }

        return ans;
    }
};