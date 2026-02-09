class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        int cnt = 0;
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;

                ans.clear();
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);

                if (ans[0] + ans[1] == target) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
