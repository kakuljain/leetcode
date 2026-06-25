class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans = 0, len = 0;
        for (int i = 0; i < nums.size(); i++) {
            int f = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == target) {
                    f++;
                }
                len = j - i + 1;
                if (f > (len / 2)) {
                    ans++;
                }
            }
        }

        return ans;
    }
};