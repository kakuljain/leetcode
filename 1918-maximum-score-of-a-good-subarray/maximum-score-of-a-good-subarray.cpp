class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = nums[k], cnt = 1;
        int i = k, j = k;
        int mi = nums[k];

        while (i > 0 && j < n - 1) {

            if (nums[i - 1] > nums[j + 1]) {
                mi = min(mi, nums[i - 1]);
                i--;
            }
            else {
                mi = min(mi, nums[j + 1]);
                j++;
            }

            cnt++;
            ans = max(ans, cnt * mi);
        }

        while (i > 0) {
            mi = min(mi, nums[i - 1]);
            i--;
            cnt++;
            ans = max(ans, cnt * mi);
        }

        while (j < n - 1) {
            mi = min(mi, nums[j + 1]);
            j++;
            cnt++;
            ans = max(ans, cnt * mi);
        }

        return ans;
    }
};