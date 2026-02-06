class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int i = 0;
        int ans = n;

        for (int j = 0; j < n; j++) {
            while (nums[j] > (long long)nums[i] * k) {
                i++;
            }
            ans = min(ans, n - (j - i + 1));
        }
        return ans;
    }
};
