class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            if (prefix[i - 1] == 0)
                prefix[i] = nums[i];
            else
                prefix[i] = prefix[i - 1] * nums[i];
        }

        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (suffix[i + 1] == 0)
                suffix[i] = nums[i];
            else
                suffix[i] = suffix[i + 1] * nums[i];
        }

        int ans = nums[0];
        for (int i = 0; i < n; i++) {
            ans = max(ans, max(prefix[i], suffix[i]));
        }

        return ans;
    }
};