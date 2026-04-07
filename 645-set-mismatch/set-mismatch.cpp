class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mpp;

        for(int it : nums) {
            mpp[it]++;
        }

        int duplicate = -1, missing = -1;

        for(int i = 1; i <= nums.size(); i++) {
            if(mpp[i] > 1) duplicate = i;
            if(mpp[i] == 0) missing = i;
        }

        ans.push_back(duplicate); 
        ans.push_back(missing);  

        return ans;
    }
};