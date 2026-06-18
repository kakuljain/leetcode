class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1)
            return 0;
        int l = 0, r = 0;
        int ans = 0, sum = 1;
        while (r < nums.size()) {
            sum *= nums[r];
            while (sum >= k) {

                sum /= nums[l];
                l++;
            }

            ans += (r - l + 1);
            r++;
        }
        return ans;
    }
};