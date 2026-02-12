class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {

            unordered_set<int> mpe;
            unordered_set<int> mpo;

            for(int j = i; j < n; j++) {

                if(nums[j] % 2 == 0)
                    mpe.insert(nums[j]);
                else
                    mpo.insert(nums[j]);

                if(mpe.size() == mpo.size()) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
