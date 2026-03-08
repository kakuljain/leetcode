class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }

        for(int i = 1; i <= n; i++)
        {
            if(mpp.find(i) == mpp.end())
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};