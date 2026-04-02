class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;

        sort(nums.begin(), nums.end());

        ans.insert(nums);

        while(next_permutation(nums.begin(), nums.end())) {
            ans.insert(nums);
        }

       
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }
};