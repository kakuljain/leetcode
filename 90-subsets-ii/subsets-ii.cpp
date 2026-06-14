class Solution {
public:
    void f(int idx, vector<int>& nums, vector<int>& path,
           vector<vector<int>>& ans) {
        int n = nums.size();
        if (idx == n) {
            ans.push_back(path);
            return;
        } else {
            path.push_back(nums[idx]);
            f(idx + 1, nums, path, ans);
            path.pop_back();
            while (idx + 1 < n && nums[idx + 1] == nums[idx]) {
                idx++;
            }

            f(idx + 1, nums, path, ans);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> path;
        f(0, nums, path, ans);
        return ans;
    }
};