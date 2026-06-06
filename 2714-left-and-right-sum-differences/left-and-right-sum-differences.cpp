class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> prefix(n);
        int leftsum = 0, totalsum = 0, rightsum = 0, j = 0;
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        totalsum = prefix[n - 1];
        while (j < n) {
            if (j == 0) {
                leftsum = 0;
                rightsum = totalsum - prefix[0];

            } else {
                leftsum = prefix[j - 1];
                rightsum = totalsum - prefix[j];
            }
            ans.push_back(abs(leftsum - rightsum));
            j++;
        }
        return ans;
    }
};