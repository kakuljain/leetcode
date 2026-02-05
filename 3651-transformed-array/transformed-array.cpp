class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (i < n)
        {
            if (nums[i] > 0)
            {
                j = i + nums[i];
                while (j >= n) j -= n;
                ans.push_back(nums[j]);
            }
            else if (nums[i] < 0)
            {
                j = i + nums[i];
                while (j < 0) j += n;
                ans.push_back(nums[j]);
            }
            else
            {
                ans.push_back(nums[i]);
            }
            i++;
            j = 0;
        }
        return ans;
    }
};
